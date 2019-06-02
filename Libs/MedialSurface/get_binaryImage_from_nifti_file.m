function binaryImage = get_binaryImage_from_nifti_file(fileName)
fileName = strcat(fileName,'.nii.gz');
V = load_nii(fileName);
voxel = V.img;
voxel ( voxel == 1 ) = 1;

number_of_iterations = 1;
size_strcutre = 10;
se = strel3d(size_strcutre);
for i = 1 : number_of_iterations
    voxel2 = imdilate(voxel,se);
    voxel2 = imerode(voxel2,se);
end

voxel2 = bwareaopen(voxel2, 500);
voxel2 = double(voxel2);

voxel2 = imfill(voxel2,'holes') ;

voxel2 = imgaussfilt3(voxel2,1);


[xmin,ymin,zmin,xmax,ymax,zmax]=getBoundingBox(voxel2);
binaryImage = voxel2(xmin:xmax,ymin:ymax,zmin:zmax);
 
end