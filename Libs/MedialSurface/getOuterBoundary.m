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
function [result,result2] = getOuterBoundary(binaryImage,background)
    

[~,~,m_Neighbors26,~,~,~,~] = InitializeNeighborhoods();

result2 = zeros(size(binaryImage));

[m,n,p] = size(binaryImage);
result = zeros(m*n*p,3);

counter = 1;
for i = 2 : m-1 
    for j = 2 : n-1
        for k = 2 : p-1
            if(is_outer_border_point(binaryImage,i,j,k,m_Neighbors26,background))
                result(counter,:) = [i j k];
                result2(i,j,k) = 1;
                counter = counter + 1;
            end
        end
    end
end

result = result(1:counter-1,:);

end