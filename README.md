# 3D Average Outward Flux Skeletons

<img src='readme_images/3dmedialaxis.JPG' width=100%/> 


The medial axis, or topological skeleton, of an object Ω is the set of all points in Ω having more than one closest point on the object boundary, ∂Ω. This repository contains matlab code for computing the medial axis of 3D binary volumes.

This package presents many tools to read different 3D file formats such as `.vtk` , `.stl` , `.obj` and `.off`, and then it renders those 3D objects as 3D binary volume. 

A 3D binary volume is a volume (3D matrix) with only two values or colors. This code (and all examples) use the convention that the two  colors (values) are black and white, with voxl values 0 and 1 respectively.

The medial axis is only computed in white regions; i.e. Ω is considered to be all white voxels in the volume, and all black pixels are merely treated as object boundaries, or part of ∂Ω. See Usage below for more details.


## Setup

**NOTE** 

THIS CODE IS TESTED WITH MATLAB 2018b. Earlier version of MATLAB may not work with this package.
Also, Matlab Coder is a necessary toolbox to have if you want to run mex binary for faster performance.


To download the code, open a terminal and type:
```
git clone https://github.com/mrezanejad/3DAOFSkeletons.git
```
This will create a directory `3DAOFSkeletons/` containing all of the code seen here.
<br>

# Usage 


### Step 1 - Performance 
For faster performance, you may compile the `.m` matlab scripts included here to MEX binaries.

Open matlab and navigate to `3DAOFSkeletons/`. In the console, run:
```
>> compile_mex
```
This will create a folder `codegen/`, which contains auto-generate C code for the relevant `.m` files, which is then compiled to MEX.

<br>



### Step 2 - Run a demo

From the `3DAOFSkeletons/` directory, edit `demo.m` and set your `fileName`, `fileFormat`, and a specific `resolution`. Processing voxelised binary objects need a lot of RAM, therefore, resolutions above a certain cap would crash the code. 

Please note that `fileFormat` should be specified without the extension dot (e.g. `fileFormat = 'stl'`).  


To compute the medial surface a 3D object, you can simply run our matlab function `demo.m`. Navigate to the downloaded `3DAOFSkeletons/` folder and from the matlab console run:
```
>> demo
```

The medial surface and other useful datastructures that are by-product of our skeletonization algorithm would be computed from `perform_skeletonization.m` (line 19). 
<br>
<img src='readme_images/3dmedialaxis2.JPG' width=100%/> 






## Updating
Assuming you have not made any local changes to these files, you can update your local code to the newest version with [git pull](https://git-scm.com/docs/git-pull).
Open a terminal, navigate to your `SalienceScoresForScene/` folder, and run
```
git pull
```

If you have edited any files, `git pull` may throw errors. You can update while keeping your local changes by running:
```
git stash
git pull
git stash pop
```

If you are new to git, you can learn more about it [here](https://git-scm.com/doc)
<br>
<br>

## References
If you use the our 3DAOFSkeletons package, we appreciate it if you cite the following papers:

```
@Article{Hong2017,
    author={Hong, Sungmin
    and Fishbaugh, James
    and Rezanejad, Morteza
    and Siddiqi, Kaleem
    and Johnson, Hans
    and Paulsen, Jane
    and Kim, Eun Young
    and Gerig, Guido},
    title={Subject-Specific Longitudinal Shape Analysis by Coupling Spatiotemporal Shape Modeling with Medial Analysis},
    journal={Proceedings of SPIE--the International Society for Optical Engineering},
    year={2017},
    month={Apr},
    volume={10133},
    pages={101331A},
}


```

## Contact
For any question regarding this package, please contact morteza@cim.mcgill.ca

## License
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.















