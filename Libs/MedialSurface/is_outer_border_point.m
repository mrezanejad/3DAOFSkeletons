function result2 = is_outer_border_point(binaryImage,ii,jj,kk,m_Neighbors26,background)
        
if(binaryImage(ii,jj,kk)==background)
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