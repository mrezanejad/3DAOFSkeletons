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
function [xmin,ymin,zmin,xmax,ymax,zmax]=getBoundingBox(binaryImage)

background = 0;


[m,n,p] = size(binaryImage);


xmin = m+1;
ymin = n+1;
zmin = p+1;

xmax = 0;
ymax = 0;
zmax = 0;


for i = 1 : m 
    for j = 1 : n
        for k = 1 : p
            
            if(binaryImage(i,j,k) ~= background)
                
                if( i < xmin ) 
                    xmin = i;
                end
                if( i > xmax ) 
                    xmax = i;
                end
                
                if( j < ymin ) 
                    ymin = j;
                end
                if( j > ymax ) 
                    ymax = j;
                end
                
                if( k < zmin ) 
                    zmin = k;
                end
                if( k > zmax ) 
                    zmax = k;
                end
                
                
            end
            
        end
    end
end



end
