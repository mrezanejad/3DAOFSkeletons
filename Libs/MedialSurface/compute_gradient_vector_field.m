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

function [D,IDX] = compute_gradient_vector_field(binaryImage)
% [m,n,p] = size(binaryImage);

% distance function
newBinaryImage = binaryImage;
outerBoundary = getOuterBoundary(binaryImage,0);
size(outerBoundary);
for i = 1 : size(outerBoundary,1)
    newBinaryImage(outerBoundary(i,1),outerBoundary(i,2),outerBoundary(i,3)) = 1;
end

[D2,IDX2] = bwdist(newBinaryImage);
[D1,IDX1] = bwdist(~binaryImage);

IDX1(D1==0) = 0;
IDX2 (D2==0) = 0;

IDX = IDX1+IDX2;
for i = 1 : size(outerBoundary,1)
    IDX(outerBoundary(i,1),outerBoundary(i,2),outerBoundary(i,3)) = sub2ind(size(IDX),outerBoundary(i,1),outerBoundary(i,2),outerBoundary(i,3));
end

D = D1-D2;

%initialize Q
% 
% Q = zeros(m,n,p,3);
% for i = 1 : m
%     for j = 1 : n
%         for k = 1 : p
%             [cx,cy,cz] = ind2sub(size(D),IDX(sub2ind(size(IDX),i,j,k)));
%             qq = [cx,cy,cz] - [i,j,k];
%             zero_case = 0;
%             d = norm(qq);
%             if(d~=0)
%                 qq = qq / d;
%             else
%                 qq = 0;
%                 zero_case = 1;
%             end
%             if(zero_case ~= 1)
%                 Q(i,j,k,1) = qq(1);
%                 Q(i,j,k,2) = qq(2);
%                 Q(i,j,k,3) = qq(3);
%             else
%                 Q(i,j,k,1) = 0;
%                 Q(i,j,k,2) = 0;
%                 Q(i,j,k,3) = 0;
%             end
%         end
%     end
% end

size(D)
size(IDX)
end