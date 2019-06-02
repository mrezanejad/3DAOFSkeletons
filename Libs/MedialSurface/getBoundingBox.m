function [xmin,ymin,zmin,xmax,ymax,zmax]=getBoundingBox(binaryImage)

background = 0;


[m,n,p] = size(binaryImage);


xmin = m+1;
ymin = n+1;
zmin = p+1;

xmax = 0;
ymax = 0;
zmax = 0;


for i = 1 : m 
    for j = 1 : n
        for k = 1 : p
            
            if(binaryImage(i,j,k) ~= background)
                
                if( i < xmin ) 
                    xmin = i;
                end
                if( i > xmax ) 
                    xmax = i;
                end
                
                if( j < ymin ) 
                    ymin = j;
                end
                if( j > ymax ) 
                    ymax = j;
                end
                
                if( k < zmin ) 
                    zmin = k;
                end
                if( k > zmax ) 
                    zmax = k;
                end
                
                
            end
            
        end
    end
end



end
