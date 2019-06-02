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
function surface_radius = set_radius_values_on_surface(skeletonImage,boundaryPoints)



[skX,skY,skZ] = ind2sub(size(skeletonImage),find(skeletonImage~=0));

skeletonPoints= [skX,skY,skZ];

surface_radius = zeros(size(skeletonImage));

IDX = knnsearch(skeletonPoints,boundaryPoints);

for i = 1 : size(boundaryPoints,1)
    
    x = boundaryPoints(i,1);
    y = boundaryPoints(i,2);
    z = boundaryPoints(i,3);
    
    X = boundaryPoints(i,:) - skeletonPoints(IDX(i),:);
    minDistance = sqrt(sum(diag(X'*X)));    
    surface_radius(x,y,z) = minDistance;    
    
end





end