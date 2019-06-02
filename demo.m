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
clear all;
close all;
addpath(genpath('Libs'));

% SET FILE NAME
fileName = 'Dinasaur';
fileFormat = 'stl'; % note this should be without '.'


% Tuning parameters
background = 0; % background voxel color
resolution = 4;

% Getting binary Image
[binaryImage,vertex,face] = getMeshBinaryObject(fileName,fileFormat,resolution);
% binaryImage = getBinaryObject(fileName,fileFormat);

% perform skeletonization
[skeletonImage,fluxImage,distImage] = perform_skeletonization(binaryImage);


% EXTRA STEPS  
% 2) If you want to visualize the medial surface 
visualize_medial_surface(skeletonImage,fluxImage,distImage,'dist',fileName,fileFormat)


% 1) visualize the binary image
visualize_3d_binary_image_mesh(face,vertex);


