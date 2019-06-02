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
function binaryImage = skeleton_thinning_new(binaryImage,distImage,fluxImage)

% just make sure binaryImage is zero / one

%m_EndpointThreshold = - m_EndpointThreshold;
[m,n,p] = size(binaryImage);

m_EndpointThreshold = 20;


binaryImage(fluxImage < 16) = 0;

number_of_iterations = 1;
size_strcutre = 12;
se = strel3d(size_strcutre);
se2 = strel3d(size_strcutre-1);

for i = 1 : number_of_iterations
    binaryImage = imdilate(binaryImage,se);
    binaryImage = imerode(binaryImage,se2);
end


[~,~,m_Neighbors26,~,~,~,~] = InitializeNeighborhoods();

%initialize the output
skeletonImage = zeros(size(binaryImage));

% points reviewed
reviewedPoints = zeros(size(binaryImage));


outer_boundary_points = getBoundary(binaryImage, 0);
% initialize the priority queue
candidatePointsQueue = zeros(size(outer_boundary_points,1),5);

%starting points (all outer boundary points that are simple)
counter = 1;
for i = 1 : size(outer_boundary_points,1)
    II = outer_boundary_points(i,1);
    JJ = outer_boundary_points(i,2);
    KK = outer_boundary_points(i,3);    
    if (IsSimple2(binaryImage,II,JJ,KK)) 
        FluxVal = fluxImage(II,JJ,KK);
        DistVal = distImage(II,JJ,KK);
        candidatePointsQueue(counter,1) = II;
        candidatePointsQueue(counter,2) = JJ;
        candidatePointsQueue(counter,3) = KK;
        candidatePointsQueue(counter,4) = DistVal;
        candidatePointsQueue(counter,5) = FluxVal;            
        reviewedPoints(II,JJ,KK) = 1; % make sure that this point is already picked                        
        counter = counter + 1;
    end
end

%delete zeros rows!
candidatePointsQueue( ~any(candidatePointsQueue,2), : ) = [];


count = 0;
% while queue is not empty

while(size(candidatePointsQueue,1) ~=0)
    count = count+1; 
    
    % take the maximum (minimum of the magnitude) flux value 
    [~,idx] = min(candidatePointsQueue(:,5));    
    
    top = candidatePointsQueue(idx,:);
    candidatePointsQueue(idx,:) = [];

%    if(mod(count,10)==0)
%     sortrows(candidatePointsQueue,-5);
%  candidatePointsQueue(1:30,:)
%   disp('-------------');
%    end

    II = top(1);
    JJ = top(2);
    KK = top(3);
    Flux = top(5);
    
    
    %Check if the point is removable 
    if(II > 2 && JJ > 2 && KK > 2 && II < m-2 && JJ < n-2 && KK < p-2) 
    if (IsSimple2(binaryImage,II,JJ,KK) ) %First, the point needs to be simple, then remove if:
        
        endpoint = IsEndPoint(binaryImage,II,JJ,KK);
%         if(endpoint == 1)
%             Flux
%         end
        if ( ((endpoint==1)&&( Flux > m_EndpointThreshold)) ) % the point is not an endpoint or it is an endpoint but does not have a negative enough flux 
            
            skeletonImage(II,JJ,KK) = 1;
            
        else
            
            binaryImage(II,JJ,KK)= 0; % delete the pixel            
            %add the neighbors to the queue
            for i=1:size(m_Neighbors26,1)   
                indexNeigh_i = II+m_Neighbors26(i,1);
                indexNeigh_j = JJ+m_Neighbors26(i,2);
                indexNeigh_k = KK+m_Neighbors26(i,3);
                if(reviewedPoints(indexNeigh_i,indexNeigh_j,indexNeigh_k)==0)
                    if((binaryImage(indexNeigh_i,indexNeigh_j,indexNeigh_k) ~= 0 ) && (IsSimple2(binaryImage,indexNeigh_i,indexNeigh_j,indexNeigh_k)) )

                        Dist = distImage(indexNeigh_i,indexNeigh_j,indexNeigh_k);
                        Flux = fluxImage(indexNeigh_i,indexNeigh_j,indexNeigh_k);
                        candidateNeighbor = [indexNeigh_i,indexNeigh_j,indexNeigh_k,Dist,Flux];
                        newCandidatePointsQueue = [candidatePointsQueue;candidateNeighbor];
                        candidatePointsQueue = newCandidatePointsQueue;
                        reviewedPoints(indexNeigh_i,indexNeigh_j,indexNeigh_k) = 1;
                    end
                end
            end
        
            
        end
    
        
    end
    end
        
end
    
end

