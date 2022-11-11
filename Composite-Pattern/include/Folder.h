#ifndef FOLDER_H
#define FOLDER_H
#include <IListable.h>
#include <IComposableOfListable.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Clase Folder, hereda de las interfaces Listable y ComposableOfListable
class Folder : public IListable, public IComposableOfListable
{
	private:
		string node; // El atributo node guardara la cadena
		vector<IListable*> _child; // Declaro una plantilla que apunta a la interfaz Listable

	public:
		Folder(string node); // Constructor Folder
		~Folder(); // Destructor Folder
		void list(int depth); // Metodo listar
		void add(IListable* component); // Metodo añadir 
		void remove(IListable* component); // Metodo quitar
};

#endif