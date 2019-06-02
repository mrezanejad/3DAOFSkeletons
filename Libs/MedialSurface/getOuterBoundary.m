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