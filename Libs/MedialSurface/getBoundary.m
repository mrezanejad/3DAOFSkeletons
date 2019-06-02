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
function result = getBoundary(binaryImage,background)
    

    [~,~,m_Neighbors26,~,~,~,~] = InitializeNeighborhoods();
    
    function result2 = is_border_point(ii,jj,kk)
        
        if(binaryImage(ii,jj,kk)~=background)
            result2 = 0;
            nOfBackgroundPoints = 0;
            nOfForegoundPoints = 0;
            iterator = 1;
            while( (nOfBackgroundPoints == 0 || nOfForegoundPoints == 0) && iterator <= 26 )

                if(binaryImage(ii+m_Neighbors26(iterator,1),jj++m_Neighbors26(iterator,2),kk+m_Neighbors26(iterator,3)) > background)
                    nOfForegoundPoints = nOfForegoundPoints + 1;
                end
                if(binaryImage(ii+m_Neighbors26(iterator,1),jj++m_Neighbors26(iterator,2),kk+m_Neighbors26(iterator,3)) <= background)
                    nOfBackgroundPoints = nOfBackgroundPoints + 1;
                end
                iterator = iterator + 1;
            end
            if nOfBackgroundPoints > 0 && nOfForegoundPoints > 0
                result2 = 1;
            end
        else
            result2 = 0;
        end
        
    end


[m,n,p] = size(binaryImage);
result = zeros(m*n*p,3);

counter = 1;
for i = 2 : m-1 
    for j = 2 : n-1
        for k = 2 : p-1
            if(is_border_point(i,j,k))
                result(counter,:) = [i j k];
                counter = counter + 1;
            end
        end
    end
end

result = result(1:counter-1,:);

end