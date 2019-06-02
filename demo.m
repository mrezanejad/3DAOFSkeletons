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


