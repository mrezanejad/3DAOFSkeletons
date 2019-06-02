% Copyright Morteza Rezanejad
% McGill University, Montreal, QC 2019
%
% Contact: morteza [at] cim [dot] mcgill [dot] ca 
% -------------------------------------------------------------------------
% This program is free software: you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation, either version 3 of the License, or
% (at your option) any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program.  If not, see <https://www.gnu.org/licenses/>.
% -------------------------------------------------------------------------
function binaryImage = getBinaryObject(fileName,fileFormat)


% resolution
resolution = 50;
m = 100;
n = 100;
p = 100;



if(strcmp(fileFormat,'nifti'))
    
    binaryImage = get_binaryImage_from_nifti_file(fileName);    
    % adding some zeros borders to the object to make sure that the binary 
    b2 = zeros(size(binaryImage,1)+30,size(binaryImage,2)+30,size(binaryImage,3)+30);
    b2(15:end-16,15:end-16,15:end-16) = binaryImage;
    binaryImage = b2;
    binaryImage(binaryImage~=0) = 1;
    
elseif(strcmp(fileFormat,'vtk'))
    
    [vertex,face] = read_vtk(strcat(fileName,'.vtk'));    
    [x_min,y_min,z_min,x_max,y_max,z_max] = bounding_box_vertices(vertex);
    
    % x axis -> length
    % y axis -> width 
    % z axis -> height
    
    length = x_max - x_min;
    width = y_max - y_min;
    height = z_max - z_min;        
    
    new_lentgh = resolution;
    new_width = resolution;
    new_height = resolution;
    
    %set the minimum of those three to 100 voxels 
    
    if(length <= width && length <= height) 
        
        new_width = width/length * new_lentgh;
        new_height = height/length * new_lentgh;
        
    elseif(width <= length && width <= height)
        
        new_length = length/width * new_width;
        new_height = height/width * new_width;
        
    elseif(height <= width && height <= length)
        
        new_length = length/height * new_height;
        new_width = width/height * new_height;
        
    end
    
    new_lentgh = floor(new_lentgh);
    new_width = floor(new_width);
    new_height = floor(new_height);
    
    FV = struct('faces',face','vertices',vertex');   
    
    binaryImage = VOXELISE(new_lentgh,new_width,new_height,FV);
    
        % adding some zeros borders to the object to make sure that the binary 
    b2 = zeros(size(binaryImage,1)+10,size(binaryImage,2)+10,size(binaryImage,3)+10);
    b2(5:end-6,5:end-6,5:end-6) = binaryImage;
    binaryImage = b2;

elseif(strcmp(fileFormat,'stl'))
    stlFileName = strcat(fileName,'.stl');
    binaryImage = VOXELISE(m,n,p,stlFileName,'xyz');
    % adding some zeros borders to the object to make sure that the binary 
    b2 = zeros(size(binaryImage,1)+10,size(binaryImage,2)+10,size(binaryImage,3)+10);
    b2(5:end-6,5:end-6,5:end-6) = binaryImage;
    binaryImage = b2;
else
    

    % make a stl mesh file
    stlFileName = convert_to_stl(strcat(fileName,'.',fileFormat));
    
    
    % make a voxelised object 
    binaryImage = VOXELISE(m,n,p,stlFileName,'xyz');
    
    % adding some zeros borders to the object to make sure that the binary 
    b2 = zeros(size(binaryImage,1)+10,size(binaryImage,2)+10,size(binaryImage,3)+10);
    b2(5:end-6,5:end-6,5:end-6) = binaryImage;
    binaryImage = b2;
    
    
end


end