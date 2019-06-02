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
function cc = GetNumberOfConnectedBackgroundComponentsArray(outputImage,ii,jj,kk)

% 
% m_Neighbors18 = [-1,-1,0;-1,0,-1;-1,0,0;-1,0,1;-1,1,0;0,-1,-1;0,-1,0;0,-1,1;0,0,-1;0,0,1;0,1,-1;0,1,0;0,1,1;1,-1,0;1,0,-1;1,0,0;1,0,1;1,1,0];
% m_NeighGraphs18 = [1,3,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;2,3,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,2,3,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0;3,4,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;3,5,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;6,7,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,6,7,8,14,0,0,0,0,0,0,0,0,0,0,0,0,0;7,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;2,6,9,11,15,0,0,0,0,0,0,0,0,0,0,0,0,0;4,8,10,13,17,0,0,0,0,0,0,0,0,0,0,0,0,0;9,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;5,11,12,13,18,0,0,0,0,0,0,0,0,0,0,0,0,0;10,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;7,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;9,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;14,15,16,17,18,0,0,0,0,0,0,0,0,0,0,0,0,0;10,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;12,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
% m_n6 = [0;0;1;0;0;0;1;0;1;1;0;1;0;0;0;1;0;0];



[~,m_Neighbors18,~,~,m_NeighGraphs18,~,m_n6] = InitializeNeighborhoods();
%initialization
cc=0;
Q = zeros(1000,1);
front_pointer = 1;
end_pointer = 1;
visited = zeros(18,1);

for i=1:size(m_Neighbors18,1)
    
    % a 6 neighbor to the center point and a previously unvisited point and a background point
    if ( (m_n6(i)) && (visited(i)==0) &&  (outputImage(ii+m_Neighbors18(i,1),jj+m_Neighbors18(i,2),kk+m_Neighbors18(i,3))<=0) )  
        
        cc = cc +1 ;%this is a new component

        %We visit it using breadth first search
        Q(end_pointer) = i;
        end_pointer = end_pointer+1;
        visited(i) = 1;
        while (end_pointer > front_pointer) 
            top = Q(front_pointer);
            front_pointer = front_pointer + 1;
            visited(top)=1;

            %Add the unvisited neighbors to the queue

            it = 1;
            while m_NeighGraphs18(top,it)~=0
                neighbor = m_NeighGraphs18(top,it);
                if ((visited(neighbor)==0) && (outputImage(ii+m_Neighbors18(neighbor,1),jj+m_Neighbors18(neighbor,2),kk+m_Neighbors18(neighbor,3))<=0)) 
                    visited(neighbor)=1;
                      Q(end_pointer) = neighbor;
                      end_pointer = end_pointer+1;
                end
                it = it + 1;
            end
        end
    end
end
end