function skeletonImage = post_process_skeleton(skeletonImage)



% remove isolated regions 
skeletonImage = bwareaopen(skeletonImage, 16);

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
% Type Flabel =   7; %candidate surface point
% Type G label =   8; %junction between curve(s) and surface
% Type H label =   9; %junction of surfaces
% Type I label =  10; %junction between surface(s) and curve

[m,n,p] = size(skeletonImage);

for i = 2 : m -1
    for j = 2 : n -1
        for k = 2 : p -1

            if(skeletonImage(i,j,k)~=0)

                label = TopologicalLabeling(skeletonImage,i,j,k);
                if (label == 3 || label == 5 || label == 6) 
                    skeletonImage(i,j,k) = 0;    % curve point
                end

            end

        end
    end
end


% remove isolated regions 
skeletonImage = bwareaopen(skeletonImage, 16);

skeletonImage = double(skeletonImage);
    
end