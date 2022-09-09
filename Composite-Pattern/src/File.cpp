#include <File.h>
using namespace std;

// Implementacion del constructor File
File::File(string _node)
{
	node = _node; // Asigno una nueva variable al 'node' de la clase
}

// Implementacion del destructor File
File::~File(){} 

// Implementacion del metodo list
void File::list(int depth)
{
	string newStr(depth, '_'); // Declaro un objeto de cadena
	cout << newStr << node << " depth: " << depth << endl; // Imprimo el objeto de cadena junto con el node de la calse y la variable depth
}