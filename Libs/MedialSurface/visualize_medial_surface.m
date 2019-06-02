function visualize_medial_surface(skeletonImage,fluxImage,D,mod,fileName,fileFormat)


if(ndims(D) == 4)
    distImage = (D(:,:,:,1).^2+D(:,:,:,2).^2+D(:,:,:,3).^2).^(0.5);
else
    distImage = D;
end

maxRadius = max(max(max(distImage)));


if(strcmp(mod,'flux'))
    
    fluxImage(skeletonImage == 0) = NaN;
    figure;
    cmap = jet(2000);
    %fluxImage = fluxImage(25:26,:,:);
    PATCH_3Darray(fluxImage,1:size(fluxImage,1),1:size(fluxImage,2),1:size(fluxImage,3),cmap,'col')
    colorbar
    title('Colored by average outward flux value');
    
elseif(strcmp(mod,'dist'))                
    
    distImage(skeletonImage == 0) = NaN;
    %distImage =permute(distImage,[3 1 2]);
    figure;
    cmap = jet(2000);
    PATCH_3Darray(distImage,1:size(distImage,1),1:size(distImage,2),1:size(distImage,3),cmap,'col')
    colorbar
    title('Medial surface colored based on radii values on each voxel');
    
elseif(strcmp(mod,'reconstruct'))
    
    reconstructedImage = skeleton_reconstruction(skeletonImage,distImage);
    reconstructedImage(reconstructedImage == 0) = NaN;
    figure;
    %cmap = jet(2000);
    PATCH_3Darray(reconstructedImage,1:size(reconstructedImage,1),1:size(reconstructedImage,2),1:size(reconstructedImage,3))
    title('Reconstructed Binary Image');
    
elseif(strcmp(mod,'uniqueness'))
    
    valued_skeleton = compute_uniqueness(skeletonImage,distImage);
    valued_skeleton(valued_skeleton == 0) = NaN;
    figure;
    cmap = jet(2000);
    PATCH_3Darray(valued_skeleton,1:size(valued_skeleton,1),1:size(valued_skeleton,2),1:size(valued_skeleton,3),cmap,'col')
    colorbar
    title('Skeleton Image');
    
elseif(strcmp(mod,'diff_volume'))
    % Getting binary Image
    
    binaryImage = getBinaryObject(fileName,fileFormat);
    originalSize = max(size(find(binaryImage ~=0)));
    distImage = bwdist(~binaryImage);
    reconstructedImage = skeleton_reconstruction(skeletonImage,distImage);  
    diffImage = binaryImage - reconstructedImage ; 
                
    diffSize = max(size(find(diffImage ~= 0)));
    diffPercent = 50*diffSize/originalSize;
    fprintf('Reconstruction Percentage = %f percent\n',100-diffPercent);
            
    %binaryImage =permute(binaryImage,[3 1 2]);
    binaryImage(binaryImage == 0) = NaN;
    figure;
    cmap = jet(2000);
    PATCH_3Darray(binaryImage,1:size(binaryImage,1),1:size(binaryImage,2),1:size(binaryImage,3),cmap,'col')
    title('Original Binary Image');
    
    
    %reconstructedImage =permute(reconstructedImage,[3 1 2]);
    reconstructedImage(reconstructedImage == 0) = NaN;
    figure;
    cmap = jet(2000);
    PATCH_3Darray(reconstructedImage,1:size(reconstructedImage,1),1:size(reconstructedImage,2),1:size(reconstructedImage,3),cmap,'col')
    title('Reconstructed Binary Image');
    
    %diffImage =permute(diffImage,[3 1 2]);
    diffImage(diffImage == 0) = NaN;
    figure;
    cmap = jet(2000);
    PATCH_3Darray(diffImage,1:size(diffImage,1),1:size(diffImage,2),1:size(diffImage,3),cmap,'col')
    title('Difference between Original and Reconstructed');
    colorbar
elseif(strcmp(mod,'original'))
        
    binaryImage = getBinaryObject(fileName,fileFormat);
                       
    %binaryImage =permute(binaryImage,[3 1 2]);
    binaryImage(binaryImage == 0) = NaN;
    figure;
    cmap = jet(2000);
    PATCH_3Darray(binaryImage,1:size(binaryImage,1),1:size(binaryImage,2),1:size(binaryImage,3),cmap,'col')
    title('Original Binary Image');
    
else
    
    % Type A interior point CBar = 0,
    % Type B isolated point: C* = 0
    % Type C border point: CBar = 1, C* = 1
    % Type D curve point: (~ = 1, C* = 2
    % Type E curves junction: CBar = 1, C* > 2
    % Type F surface point: CBar = 2, C* = 1
    % Type G surface-curve(s) junction: CBar = 2, C* _> 2
    % Type H surfaces junction: CBar > 2, C* = 1
    % Type I surfaces-curve(s) junction: CBar > 2, C* > 2 

    % Type A label =   2; %interior point 
    % Type B label =   3; %isolated point
    % Type C label =   4; %simple point
    % Type D label =   5; %candidate curve point
    % Type E label =   6; %junction of curves
    % Type Flabel =   7;  %candidate surface point
    % Type G label =   8; %junction between curve(s) and surface
    % Type H label =   9; %junction of surfaces
    % Type I label =  10; %junction between surface(s) and curve

    [m,n,p] = size(skeletonImage);
    
    for i = 2 : m -1
        for j = 2 : n -1
            for k = 2 : p -1
                
                if(skeletonImage(i,j,k)~=0)
                    
                    label = TopologicalLabeling(skeletonImage,i,j,k);
                    if (label == 2)               
                        disp('we got interior point');
                    elseif (label== 3)              
                        disp('we got isolated point');
                    elseif (label == 4) 
                        skeletonImage(i,j,k) = 0.61; %border point
                    elseif (label == 5) 
                        skeletonImage(i,j,k) = 0.21;  %curve point
                    elseif (label == 6)  
                        skeletonImage(i,j,k) = 0.7;   %curves junction
                    elseif (label == 7) 
                        skeletonImage(i,j,k) = 0.41;   %surface point
                    elseif (label == 8) 
                        skeletonImage(i,j,k) = 0.85;   %surface-curve(s) junction
                    elseif (label == 9)  
                        skeletonImage(i,j,k) = 0.001;   %surfaces junction
                    elseif (label == 10)  
                        skeletonImage(i,j,k) = 1;     %surfaces-curve(s) junction
                    else  
                    end

                end
                
            end
        end
    end
    
    skeletonImage(skeletonImage == 0) = NaN;
    figure;
    cmap = jet(2000);
    %fluxImage = fluxImage(25:26,:,:);
    PATCH_3Darray(skeletonImage,1:size(skeletonImage,1),1:size(skeletonImage,2),1:size(skeletonImage,3),cmap,'col')
    
    
    title('Labeled Skeleton');
    
end

axis([-10 size(skeletonImage,1)+10 -10 size(skeletonImage,2)+1 -10 size(skeletonImage,3)+1])
end


% [X, Y, Z] = meshgrid(unique(xx(:)), unique(yy(:)), unique(zz(:)));
% 
% V = zeros(size(X));
% 
% x_coords = sort(unique(xx));
% y_coords = sort(unique(yy));
% z_coords = sort(unique(zz));
% 
% [m n p] = size(X);
% m 
% n 
% p
% for i = 1 : m
%     for j = 1 : n
%         for k = 1 : p
%             V(i,j,k) = aof_vals(sub2ind(size(distImage),j,i,k));
%         end
%     end
% end
% 
% 


%fluxImage = -fluxImage;
% fluxImage(fluxImage < 15 ) = NaN;
% 
% figure;
% cmap = jet(16);
% PATCH_3Darray(fluxImage,1:size(fluxImage,1),1:size(fluxImage,2),1:size(fluxImage,3),cmap,'col')