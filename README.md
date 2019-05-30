# 3D Average Outward Flux Skeletons

The medial axis, or topological skeleton, of an object Ω is the set of all points in Ω having more than one closest point on the object boundary, ∂Ω. This repository contains matlab code for computing the medial axis of 3D binary volumes.

A 3D binary volume is a volume (3D matrix) with only two values or colors. This code (and all examples) use the convention that the two  colors (values) are black and white, with voxl values 0 and 1 respectively.

The medial axis is only computed in white regions; i.e. Ω is considered to be all white voxels in the volume, and all black pixels are merely treated as object boundaries, or part of ∂Ω. See Usage below for more details.

