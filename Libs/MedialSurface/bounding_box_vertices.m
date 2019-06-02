function [x_min,y_min,z_min,x_max,y_max,z_max] = bounding_box_vertices(vertex)


x_min = min(vertex(1,:));
x_max = max(vertex(1,:));


y_min = min(vertex(2,:));
y_max = max(vertex(2,:));

z_min = min(vertex(3,:));
z_max = max(vertex(3,:));


end