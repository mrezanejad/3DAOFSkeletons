
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
function result = IsEndPoint(outputImage,II,JJ,KK)


    if(outputImage(II, JJ, KK) > 0)
    
         m_Neighbors6 = [-1     0     0;
         0    -1     0;
         0     0    -1;
         0     0     1;
         0     1     0;
         1     0     0];
        



        %check there is only one "on" neighbor
        count = 0;
        for i = 1:6
            %check if region is Inside index + m_Neighbors6[i]-> region.IsInside(index + m_Neighbors6[i])
            if (outputImage(II + m_Neighbors6(i,1), JJ + m_Neighbors6(i,2), KK + m_Neighbors6(i,3)) > 0)
                    value = outputImage(II + m_Neighbors6(i,1), JJ + m_Neighbors6(i,2), KK + m_Neighbors6(i,3));                
                    if (value > 0)
                        count = count + 1;
                    end

            %else
            %    disp('out of bounds');
            end
        end

        resultEndPoint = (count == 1);
        result_surface = 0;
        if(resultEndPoint==0)
       
            
            %create Digital planes put somewhere else?
            planes26 = zeros(9,8,3);

            planes26(1,:,:) = [ 0, -1, -1 ; 0, 0, -1 ; 0, 1, -1 ; 0, 1, 0 ; 0, 1, 1 ; 0, 0, 1 ; 0, -1, 1 ; 0, -1, 0 ];
            planes26(2,:,:) = [ -1, 0, -1 ; 0, 0, -1 ; 1, 0, -1 ; 1, 0, 0 ; 1, 0, 1 ; 0, 0, 1 ; -1, 0, 1 ; -1, 0, 0 ];
            planes26(3,:,:) = [ -1, -1, 0 ; 0, -1, 0 ; 1, -1, 0 ; 1, 0, 0 ; 1, 1, 0 ; 0, 1, 0 ; -1, 1, 0 ; -1, 0, 0 ];
            planes26(4,:,:) = [ -1, -1, -1 ; 0, 0, -1 ; 1, 1, -1 ; 1, 1, 0 ; 1, 1, 1 ; 0, 0, 1 ; -1, -1, 1 ; -1, -1, 0 ];
            planes26(5,:,:) = [ 1, -1, -1 ; 0, 0, -1 ; -1, 1, -1 ; -1, 1, 0 ; -1, 1, 1 ; 0, 0, 1 ; 1, -1, 1 ; 1, -1, 0 ];
            planes26(6,:,:) = [ -1, -1, -1 ; -1, 0, -1 ; -1, 1, -1 ; 0, 1, 0 ; 1, 1, 1 ; 1, 0, 1 ; 1, -1, 1 ; 0, -1, 0 ];
            planes26(7,:,:) = [ 1, -1, -1 ; 1, 0, -1 ; 1, 1, -1 ; 0, 1, 0 ; -1, 1, 1 ; -1, 0, 1 ; -1, -1, 1 ; 0, -1, 0 ];
            planes26(8,:,:) = [ -1, -1, -1 ; 0, -1, -1 ; 1, -1, -1 ; 1, 0, 0 ; 1, 1, 1 ; 0, 1, 1 ; -1, 1, 1 ; -1, 0, 0 ];
            planes26(9,:,:) = [ -1, 1, -1 ; 0, 1, -1 ; 1, 1, -1 ; 1, 0, 0 ; 1, -1, 1 ; 0, -1, 1 ; -1, -1, 1 ; -1, 0, 0 ];


            %get the output
            %region = GetLargestPossibleRegion(outputImage);

            % return true if endpoint of a line in one of 9 digital planes
            % see Pudney paper
            for j = 1 : 9

                if(result_surface == 0)

                    numberOfNeighbors = 0;
                   % for n = 1 : 26
                        for i = 1 : 8 
                            newI = II + planes26(j,i,1);
                            newJ = JJ + + planes26(j,i,2);
                            newK = KK+ planes26(j,i,3);
                            if (outputImage(newI,newJ,newK) > 0)

        %                        value = outputImage(II + planes26(j,i,1), JJ + + planes26(j,i,2), KK+ planes26(j,i,3));
                                %	  OutputPixelType value = outputImage->GetPixel(index);
         %                       if (value > 0) 
                                    numberOfNeighbors = numberOfNeighbors + 1;
          %                      end

                            %else 
                            %   fprintf('OutOfBounds %d,%d,%d \n' , II + m_Neighbors26(i,1),II + m_Neighbors26(i,2),KK + m_Neighbors26(i,3));
                            end
                        end
                    %end

                    %result_surface = result_surface ||   (numberOfNeighbors <= 2);
                    if(result_surface ||   (numberOfNeighbors <= 1))
                        result_surface = 1;
                    else
                        result_surface = 0;
                    end
                end
            end
        end
        
        result = result_surface;               
    else
        result = 0;
    end

    
    
end