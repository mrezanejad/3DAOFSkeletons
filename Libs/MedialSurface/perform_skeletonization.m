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