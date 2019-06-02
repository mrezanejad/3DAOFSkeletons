# 3D Average Outward Flux Skeletons

<img src='readme_images/3dmedialaxis.JPG' width=100%/> 


The medial axis, or topological skeleton, of an object Ω is the set of all points in Ω having more than one closest point on the object boundary, ∂Ω. This repository contains matlab code for computing the medial axis of 3D binary volumes.

A 3D binary volume is a volume (3D matrix) with only two values or colors. This code (and all examples) use the convention that the two  colors (values) are black and white, with voxl values 0 and 1 respectively.

The medial axis is only computed in white regions; i.e. Ω is considered to be all white voxels in the volume, and all black pixels are merely treated as object boundaries, or part of ∂Ω. See Usage below for more details.


# Usage 
There are three directories in this package:
1) Data: where you can have your VTK input files.
2) Libs (libraries): the function(s) you can use to produce your results
3) Results: where your results are stored

The process is simple. First, you open Matlab and locate your directory to 'SkeletonizationPackage'. 

Secondly, from Current Folder navigation window (usually on the left) select all three folders, right click, 
select Add to Path, select Folders and Subfolders.

Thirdly, you may start by a simple test as follws:

[~,~,~,Radii_Vals] = perform_skeletonization_with_mesh_data('init_baseline_left_caudate_trajectory___t_0.vtk','vtk');

perform_skeletonization_with_mesh_data.m is the matlab function you need to run to obtain radii information (Radii_Vals) on each vertex. 

This function receives two inputs: 1) the vtk file name 2) the format (which in your case is 'vtk') 
(I know I could have done some extra coding to detect the format ;) )

'init_baseline_left_caudate_trajectory___t_0.vtk' is one of your files stored in: Data\VTK_DATA\.... 

you can replace this with any data of yours and play with that. 

If the perform_skeletonization_with_mesh_data crashes, it is because of pre-compiled mex files I have included in this package. 

For this case you have two options:

1) Compile those mex files on your machine (recommended because of the speed): if you open the file
perform_skeletonization_with_mesh_data.m (located in 'Libs\Medial Surface' - you can try open perform_skeletonization_with_mesh_data.m), 
you see lines 19 and 27 there are two mex functions ('compute_gradient_vector_field_mex', 'compute_aof_mex')
From the directory open the corresponding their Matlab Coder Projects ('compute_gradient_vector_field.prj' and 'compute_aof.proj')
When you open those projects you just need to locally add entry points path (which are their corresponding matlab functions) and then 
just go next and next and your matlab should be able to compile those mex files for you) 

2) You can go to lines 19 and 27 and just remove '_mex' from their  two mex functions ('compute_gradient_vector_field_mex', 'compute_aof_mex')



The last point is that when you are done running this code, I am saving (lines 52 and 53) results of skeletonization and computing radii in two files in 
'Result' directory. The first directory is 'ProcessedSkeletons' and the second is 'ProcessedRadii'. You can play with this code and probably 
remove it if you don't need to save it every time. 

Hope you would be able to run and use the package. I know there are many extra stuff there but I tried my best to clean it up as much as I can. 


——————————————————
UPDATE 01:
To visualize your skeleton, let’s say you have an example with the following name and you have computed your skeleton:


fileName = 'Regression_baseline_Atlas_template_init_baseline_left_caudate_to_subject_0__t_9_trajectory___t_59.vtk';
fileFormat = 'vtk'; 

[skeletonImage,fluxImage,distImage,Radii_Vals] = perform_skeletonization_with_mesh_data(fileName,fileFormat);

You can a function called testFunctions.m 

inputs: 

for skeletonImage -> you give skeletonImage

for fluxImage -> you give fluxImage

for D -> you give distImage

for mod -> you have different options 
a)  ‘flux’ -> in this mode the skeleton is visualized based on ‘flux’ values where it is value has a relationship with object angle 
e.g testFunctions(skeletonImage,fluxImage,distImage,'flux')
b) ‘dist’ ->  in this mode the skeleton is visualized based on the radii values of each medial point (or basically the distance function)
e.g testFunctions(skeletonImage,fluxImage,distImage,'dist')
c) ‘reconstruct’ -> in this mode you can see the result of approximate reconstruction of the original example just based on the medial skeleton (a way to see how accurate the medial
axis is in representing the who object)
e.g testFunctions(skeletonImage,fluxImage,distImage,'reconstruct')
d) uniqueness -> ignore this mode! this is incomplete
e) diff_volume -> in this mode you can compare the reconstructed object with the original but you have to make sure that you specify the original file name and its format (if you use 
e.g testFunctions(skeletonImage,fluxImage,distImage,’diff_volume’,fileName,fileFormat)













