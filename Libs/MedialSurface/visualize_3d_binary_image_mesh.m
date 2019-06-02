function visualize_3d_binary_image_mesh(face,vertex)
figure;
patch('Faces',face','Vertices',vertex' ,'FaceColor',       [0.8 0.8 1.0], 'EdgeColor',       'none', 'FaceLighting',    'gouraud', 'AmbientStrength', 0.15);

% Add a camera light, and tone down the specular highlighting
camlight('headlight');
material('dull');

% Fix the axes scaling, and set a nice view angle
axis('image');
view([-135 35]);