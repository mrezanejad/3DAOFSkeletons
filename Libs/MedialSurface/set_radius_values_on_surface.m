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