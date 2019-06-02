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
function cc = GetNumberOfConnectedForegroundComponentsArray(outputImage,ii,jj,kk)

% 
% m_Neighbors26 = [-1,-1,-1;-1,-1,0;-1,-1,1;-1,0,-1;-1,0,0;-1,0,1;-1,1,-1;-1,1,0;-1,1,1;0,-1,-1;0,-1,0;0,-1,1;0,0,-1;0,0,1;0,1,-1;0,1,0;0,1,1;1,-1,-1;1,-1,0;1,-1,1;1,0,-1;1,0,0;1,0,1;1,1,-1;1,1,0;1,1,1];
% m_NeighGraphs26 = [1,2,4,5,10,11,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,2,3,4,5,6,10,11,12,13,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;2,3,5,6,11,12,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,2,4,5,7,8,10,11,13,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0,0,0,0,0,0,0,0,0;2,3,5,6,8,9,11,12,14,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;4,5,7,8,13,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;4,5,6,7,8,9,13,14,15,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;5,6,8,9,14,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,2,4,5,10,11,13,18,19,21,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,2,3,4,5,6,10,11,12,13,14,18,19,20,21,22,23,0,0,0,0,0,0,0,0,0;2,3,5,6,11,12,14,19,20,22,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;1,2,4,5,7,8,10,11,13,15,16,18,19,21,22,24,25,0,0,0,0,0,0,0,0,0;2,3,5,6,8,9,11,12,14,16,17,19,20,22,23,25,26,0,0,0,0,0,0,0,0,0;4,5,7,8,13,15,16,21,22,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;4,5,6,7,8,9,13,14,15,16,17,21,22,23,24,25,26,0,0,0,0,0,0,0,0,0;5,6,8,9,14,16,17,22,23,25,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;10,11,13,18,19,21,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;10,11,12,13,14,18,19,20,21,22,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;11,12,14,19,20,22,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;10,11,13,15,16,18,19,21,22,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,0,0,0,0,0,0,0,0,0;11,12,14,16,17,19,20,22,23,25,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;13,15,16,21,22,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;13,14,15,16,17,21,22,23,24,25,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0;14,16,17,22,23,25,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];

[~,~,m_Neighbors26,~,~,m_NeighGraphs26,~] = InitializeNeighborhoods();

%initialization
cc=0;
Q = zeros(1000,1);
front_pointer = 1;
end_pointer = 1;
visited = zeros(26,1);

for i=1:size(m_Neighbors26,1) 
      
    % a previously unvisited point and a foreground point
    if ( (visited(i)==0) &&   (outputImage(ii+m_Neighbors26(i,1),jj+m_Neighbors26(i,2),kk+m_Neighbors26(i,3))>0) )  
              
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
            while m_NeighGraphs26(top,it)~=0
                neighbor = m_NeighGraphs26(top,it);
                if ((visited(neighbor)==0) && (outputImage(ii+m_Neighbors26(neighbor,1),jj+m_Neighbors26(neighbor,2),kk+m_Neighbors26(neighbor,3)))>0) 
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