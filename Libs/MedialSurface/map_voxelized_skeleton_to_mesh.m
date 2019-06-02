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
function Radii_Vals = map_voxelized_skeleton_to_mesh(vertex,resolution,surface_radius)

border_check = zeros(size(surface_radius));
[x_min,y_min,z_min,x_max,y_max,z_max] = bounding_box_vertices(vertex);


length = x_max - x_min;
width = y_max - y_min;
height = z_max - z_min;



new_lentgh = resolution;
new_width = resolution;
new_height = resolution;

mode = 1;
if(length <= width && length <= height) 
    scale = resolution / length;
    new_width = width * scale;
    new_height = height * scale;
    
elseif(width <= length && width <= height)
     scale = resolution / width; 
    new_length = length * scale;
    new_height = height * scale;
    mode = 2 ;
elseif(height <= width && height <= length)
     scale = resolution / height;
    new_length = length * scale;
    new_width = width * scale;
    mode = 3 ;
end

new_lentgh = floor(new_lentgh);
new_width = floor(new_width);
new_height = floor(new_height);


vertices_size = size(vertex,2);


Radii_Vals = zeros(1,vertices_size);


for i = 1 : vertices_size
    
    x = vertex(1,i);
    y = vertex(2,i);
    z = vertex(3,i);

    if(mode==1)
        voxel_x_pos = floor((x - x_min)/length * new_lentgh)+5;
        voxel_y_pos = floor((y - y_min)/length * new_lentgh)+5;
        voxel_z_pos = floor((z - z_min)/length * new_lentgh)+5;    
    elseif(mode == 2)
        voxel_x_pos = floor((x - x_min)/width * new_width)+5;
        voxel_y_pos = floor((y - y_min)/width * new_width)+5;
        voxel_z_pos = floor((z - z_min)/width * new_width)+5;    
    else
        voxel_x_pos = floor((x - x_min)/height * new_height)+5;
        voxel_y_pos = floor((y - y_min)/height * new_height)+5;
        voxel_z_pos = floor((z - z_min)/height * new_height)+5;    
    end
    
    border_check(voxel_x_pos,voxel_y_pos,voxel_z_pos) = 1;
    corresponding_radius = 0;
    if(surface_radius(voxel_x_pos,voxel_y_pos,voxel_z_pos)~=0)
        corresponding_radius = surface_radius(voxel_x_pos,voxel_y_pos,voxel_z_pos);
    else
        ii = -1;
        while ( ii<=1 && corresponding_radius ==0)
            jj = -1;
            while ( jj<=1 && corresponding_radius ==0)
                kk = -1;
                while (kk <=1 && corresponding_radius ==0)                   
                    corresponding_radius = surface_radius(voxel_x_pos+ii,voxel_y_pos++jj,voxel_z_pos+kk);
                    kk = kk + 1;
                end
                jj = jj + 1;
            end
            ii = ii + 1;
        end
        
    end
    
    Radii_Vals(i) = corresponding_radius/scale;                                    
end



end