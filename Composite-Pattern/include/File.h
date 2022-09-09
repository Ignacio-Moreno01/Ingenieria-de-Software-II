#ifndef FILE_H
#define FILE_H
#include <IComposableOfListable.h>
#include <iostream>
using namespace std;

// Clase File, hereda de la interfaz IListable
class File : public IListable
{
	private:
		string node; // El atributo node guardara la cadena

	public:
		File(string node); // Constructor File
		~File(); // Destructor File
		void list(int depth); // Metodo listar
};

#endif