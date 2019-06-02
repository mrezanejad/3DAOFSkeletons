function fluxImage = compute_aof(D ,IDX,sphere_points,epsilon)


%initialize Q
[m,n,p] = size(D);

nOfSamples = size(sphere_points,1);

%for each point on the sphere create the normal vector
normals = zeros(size(sphere_points));

for t = 1 : nOfSamples
    normals(t,:) = sphere_points(t,:);
end

%scale sphere_points by its radius (epsilon)
sphere_points = sphere_points * epsilon;

fluxImage = zeros(m,n,p);

for i = 1 : m
    for j = 1 : n
        for k = 1 : p
            flux_value = 0;
            if(D(i,j,k) > -1.5)            
                if( i > epsilon && j > epsilon && k > epsilon && i < m - epsilon && j < n - epsilon && k < p - epsilon )
                    %sum over dot product of normal and the gradient vector field (q-dot)
                    for ind = 1 : nOfSamples

                        
                        
                        % a point on the sphere
                        px = i+sphere_points(ind,1)+0.5;
                        py = j+sphere_points(ind,2)+0.5;
                        pz = k+sphere_points(ind,3)+0.5;
                        
                        
                        
                        %the indices of the grid cell that sphere points
                        %fall into 
                        cI = floor(i+sphere_points(ind,1)+0.5);
                        cJ = floor(j+sphere_points(ind,2)+0.5);
                        cK = floor(k+sphere_points(ind,3)+0.5);                       
                        
                        %closest point on the boundary to that sphere point
                        [bx,by,bz] = ind2sub(size(D),IDX(cI,cJ,cK));
                        
                                                                       
                        % the vector connect them
                        qq = [bx,by,bz] - [px,py,pz];
                        
                        
                        
                        
%                         zero_case = 0;
                        d = norm(qq);
                        if(d~=0)
                            qq = qq / d;
                        else
                            qq = 0;
%                             zero_case = 1;
                        end
%                         if(zero_case ~= 1)
%                             Q(i,j,k,1) = qq(1);
%                             Q(i,j,k,2) = qq(2);
%                             Q(i,j,k,3) = qq(3);
%                         else
%                             Q(i,j,k,1) = 0;
%                             Q(i,j,k,2) = 0;
%                             Q(i,j,k,3) = 0;
%                         end
%                         
%                         
%                         
%                         
%                         
%                         q_dot = zeros(1,3);
%                         q_dot(1) = Q(cI,cJ,cK,1);
%                         q_dot(2) = Q(cI,cJ,cK,2);
%                         q_dot(3) = Q(cI,cJ,cK,3);
                        flux_value = flux_value + dot(qq,normals(ind,:));
                        
                        

                    end
                end
                
            end
            fluxImage(i,j,k) = flux_value;
        end
    end
    
end




end