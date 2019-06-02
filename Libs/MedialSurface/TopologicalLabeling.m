function label = TopologicalLabeling(outputImage,II,JJ,KK)
  
%This topological labeling is based on Malandain et al. 1993
%The classification is based on the number of connected components
%of background anf foreground in a 3x3x3 neighborhood. 
%It does not detect thick junctions (curve or surface) and my misclassify them 
%for a curve or surface point.
%This can and should be fixed in the near future.

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



    Cbar   = GetNumberOfConnectedBackgroundComponentsArray(outputImage,II,JJ,KK);
    Cstar = GetNumberOfConnectedForegroundComponentsArray(outputImage,II,JJ,KK);
    
    if (Cbar==0)               
        label =   2; %interior point
    elseif (Cstar==0)              
        label =   3; %isolated point
    elseif ((Cbar==1)&&(Cstar==1)) 
        label =   4; %simple point
    elseif ((Cbar==1)&&(Cstar==2)) 
        label =   5; %candidate curve point
    elseif ((Cbar==1)&&(Cstar>2))  
        label =   6; %junction of curves
    elseif ((Cbar==2)&&(Cstar==1)) 
        label =   7; %candidate surface point
    elseif ((Cbar==2)&&(Cstar>=2)) 
        label =   8; %junction between curve(s) and surface
    elseif ((Cbar>2)&&(Cstar==1))  
        label =   9; %junction of surfaces
    elseif ((Cbar>2)&&(Cstar>=2))  
        label =  10; %junction between surface(s) and curve
    else label = 0; 
    end
end