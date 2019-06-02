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