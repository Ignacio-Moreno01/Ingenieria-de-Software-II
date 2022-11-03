#include <iostream>
#include <Folder.h>
#include <File.h>

int main()
{
    Folder* folder_01 = new Folder("folder_01"); // Creo un objeto 'directorio 1'

    Folder* folder_02 = new Folder("folder_02"); // Creo un objeto 'directorio 2'
    folder_01->add(folder_02); // Añado a 'directorio 1' el 'directorio 2'

    Folder* folder_03 = new Folder("folder_03"); // Creo un objeto 'directorio 3'
    File* file_a = new File("file A"); // Creo un objeto 'archivo A'
    folder_03->add(file_a); // Añado al 'directorio 3' el 'archivo A'
    File* file_b = new File("file A"); // Creo otro objeto 'archivo A'
    folder_03->add(file_b); // Añado al 'directorio 3' el nuevo 'archivo A'
    
    folder_02->add(folder_03); // Añado al 'directorio 2' el 'directorio 3'
    folder_01->list(1); // Listar todos los datos del 'directorio 1'

    delete folder_03; // Elimino el 'directorio 3'
    delete file_a; // Elimino el 'archivo A'
    delete file_b; // Elimino el 'archivo B'
    delete folder_02; // Elimino el 'directorio 2'
    delete folder_01; // Elimino el 'directorio 1'
    return 0;
}