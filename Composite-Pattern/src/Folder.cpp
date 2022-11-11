#include <Folder.h>
using namespace std;

// Implementacion del constructor Folder
Folder::Folder(string _node)
{
	node = _node; // Asigno una nueva variable al 'node' de la clase
}

// Implementacion del destructor Folder
Folder::~Folder(){}

// Implementacion del metodo list
void Folder::list(int depth)
{
	string newStr(depth, '_'); // Declaro un objeto de cadena
	cout << newStr << node << " depth: " << depth << endl; // Imprimo el objeto de cadena junto con el node de la calse y la variable depth
	for(IListable* child : _child) // Recorro la coleccion mediante la interfaz Listable, establece child a cada uno de los valores en _child sucesivamente
	{
		if(child != 0) // Si la clase hija es diferente a 0...
		{
			child->list(depth + 1); // Accedo a la coleccion
		}
	}
}

// Implementacion del metodo añadir
void Folder::add(IListable* component)
{
	_child.push_back(component); // Añado al final de la colección un nuevo dato
}

// Implementacion del metodo quitar
void Folder::remove(IListable* component)
{
	_child.erase(std::remove(_child.begin(), _child.end(), component), _child.end()); // Elimino un dato desde el final de la coleccion
}