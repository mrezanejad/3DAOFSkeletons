function V = sample_sphere(number_of_samples)


[V,~,~,~]=ParticleSampleSphere('N',number_of_samples);
%save('sphere_points.txt','V','-ascii');

end