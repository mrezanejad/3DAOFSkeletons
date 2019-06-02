function [m_Neighbors6,m_Neighbors18,m_Neighbors26,m_NeighGraphs6,m_NeighGraphs18,m_NeighGraphs26,m_n6] = InitializeNeighborhoods()


m_Neighbors6 = zeros(6,3);
m_Neighbors18 = zeros(18,3);
m_Neighbors26 = zeros(26,3);
m_n6 = zeros(18,1);
    
count18=1;
count6=1;
count26=1;
for i=-1:1 
  for j=-1:1
    for k=-1:1        
        if (~((i==0)&&(j==0)&&(k==0))) % ignore centre 
            
            
            % 6- (face) neighbor
            if ((i*i+j*j+k*k)<=1) 
                m_Neighbors6(count6,1) =  i;
                m_Neighbors6(count6,2) =  j;
                m_Neighbors6(count6,3) =  k;
                count6 = count6 + 1 ;
            end
            
            % 18- (face or edge) neighbor
            if ((i*i+j*j+k*k)<=2)
                
                m_Neighbors18(count18,1) =  i;
                m_Neighbors18(count18,2) =  j;
                m_Neighbors18(count18,3) =  k;
                
                if ((i*i+j*j+k*k)<=1) 
                    m_n6(count18) = 1; %index of 6- neighbor in the 18- neighbor vector.
                else
                    m_n6(count18) = 0;	
                end
                
                count18 = count18 + 1;
            end
            
            
            
            %m_Neighbors26 initialization            
            m_Neighbors26(count26,1) = i;
            m_Neighbors26(count26,2) = j;
            m_Neighbors26(count26,3) = k;
            count26 =  count26 + 1;
        end
    end
  end
end



%m_NeighGraphs26 is a graph representing a 26 connected 26-neighborhood 
m_NeighGraphs26 = zeros(26,26);
%m_NeighGraphs18 is a graph representing a 6 connected  18-neighborhood   
m_NeighGraphs18 = zeros(18,18);
%m_NeighGraphs6 is a graph representing a 6 connected  6-neighborhood   
m_NeighGraphs6 = zeros(6,6);



for i=1:size(m_Neighbors26,1)
    counter_j = 1;
    for j=1:size(m_Neighbors26,1)
        squarenorm = ( ((m_Neighbors26(i,1)-m_Neighbors26(j,1))*(m_Neighbors26(i,1)-m_Neighbors26(j,1))) + ((m_Neighbors26(i,2)-m_Neighbors26(j,2))*(m_Neighbors26(i,2)-m_Neighbors26(j,2))) + ((m_Neighbors26(i,3)-m_Neighbors26(j,3))*(m_Neighbors26(i,3)-m_Neighbors26(j,3))));
        if (squarenorm<=3) 
            m_NeighGraphs26(i,counter_j) = j;
            counter_j = counter_j + 1;
        end
    end
end


for i=1:size(m_Neighbors18,1)
    counter_j = 1;
    for j=1:size(m_Neighbors18,1)
        squarenorm = ( ((m_Neighbors18(i,1)-m_Neighbors18(j,1))*(m_Neighbors18(i,1)-m_Neighbors18(j,1))) + ((m_Neighbors18(i,2)-m_Neighbors18(j,2))*(m_Neighbors18(i,2)-m_Neighbors18(j,2))) +((m_Neighbors18(i,3)-m_Neighbors18(j,3))*(m_Neighbors18(i,3)-m_Neighbors18(j,3)))); 
        if (squarenorm<=1) 
            m_NeighGraphs18(i,counter_j) = j;
            counter_j = counter_j + 1;
        end
    end
end

            
for i=1:size(m_Neighbors6,1)
    counter_j = 1;
    for j=1:size(m_Neighbors6,1)
        squarenorm = ( ((m_Neighbors6(i,1)-m_Neighbors6(j,1))*(m_Neighbors6(i,1)-m_Neighbors6(j,1))) +((m_Neighbors6(i,2)-m_Neighbors6(j,2))*(m_Neighbors6(i,2)-m_Neighbors6(j,2))) +((m_Neighbors6(i,3)-m_Neighbors6(j,3))*(m_Neighbors6(i,3)-m_Neighbors6(j,3)))); 
        if (squarenorm<=1) 
            m_NeighGraphs6(i,counter_j) = j;
            counter_j = counter_j + 1;
        end
    end
end




end