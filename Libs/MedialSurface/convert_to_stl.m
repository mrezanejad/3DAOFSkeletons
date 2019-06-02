function stlFileName = convert_to_stl(fileName)
[vertex,face] = read_mesh(fileName);

size(vertex)
size(face)
[~,stl_file_name,~] = fileparts(fileName);
stlFileName = strcat(stl_file_name,'.stl');
stlwrite(stlFileName, face', vertex');

end