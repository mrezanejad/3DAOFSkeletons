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
function [binaryImage,vertex,face] = getMeshBinaryObject(fileName,fileFormat,resolution)


% resolution
FileName = strcat(fileName,'.',fileFormat);
if(strcmp(fileFormat,'vtk'))
    [vertex,face] = read_vtk(FileName);
elseif(strcmp(fileFormat,'stl'))
    stlFileName = strcat(fileName,'.stl');
    [tri, ~, ~, ~] = stlread(stlFileName);
    face = tri.ConnectivityList';
    vertex = tri.Points';
else
    surf = SurfStatReadSurf1(FileName);
    vertex = surf.coord;
    face = surf.tri';
end

[x_min,y_min,z_min,x_max,y_max,z_max] = bounding_box_vertices(vertex);

% x axis -> length
% y axis -> width
% z axis -> height

length = x_max - x_min;
width = y_max - y_min;
height = z_max - z_min;

new_lentgh = floor(resolution*abs(length));
new_width = floor(resolution*abs(width));
new_height = floor(resolution*abs(height));



FV = struct('faces',face','vertices',vertex');

binaryImage = VOXELISE(new_lentgh,new_width,new_height,FV);

% adding some zeros borders to the object to make sure that the binary
b2 = zeros(size(binaryImage,1)+10,size(binaryImage,2)+10,size(binaryImage,3)+10);
b2(5:size(binaryImage,1)+4,5:size(binaryImage,2)+4,5:size(binaryImage,3)+4) = binaryImage;
binaryImage = b2;


end