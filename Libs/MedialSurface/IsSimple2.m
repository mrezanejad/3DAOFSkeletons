function result = IsSimple2(outputImage,II,JJ,KK)
result = (GetNumberOfConnectedBackgroundComponentsArray(outputImage,II,JJ,KK) == 1) && (GetNumberOfConnectedForegroundComponentsArray(outputImage,II,JJ,KK) == 1);    
end