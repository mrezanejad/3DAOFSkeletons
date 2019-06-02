function [skeletonImage,fluxImage,distImage]=perform_skeletonization(binaryImage)

number_of_samples = 60;
epsilon = 1 ;

fprintf('The skeletonization process is going to start\n');
% Computing Gradient Vector Field 
fprintf('Distance function and gradient vector field is being computed ...\n');
[distImage,IDX] = compute_gradient_vector_field(binaryImage);

% Consider a sphere with radius 1 with some sample points on that
sphere_points = sample_sphere(number_of_samples);


% Computing Average outward flux
fprintf('Average outward flux is being computed ...\n');
fluxImage = compute_aof(distImage,IDX,sphere_points,epsilon);


% Computing Skeleton
fprintf('Computing skeleton (thinning part) ...\n');
skeletonImage = skeleton_thinning_new(binaryImage,distImage,fluxImage);
skeletonImage = post_process_skeleton(skeletonImage);

end