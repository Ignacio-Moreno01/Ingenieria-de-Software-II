#ifndef ICOMPOSABLEOFLISTABLE_H
#define ICOMPOSABLEOFLISTABLE_H
#include <IListable.h>

// Interfaz Composite
class IComposableOfListable
{
	public:
		virtual ~IComposableOfListable(){}; // Destructor virtual para eliminar una instancia de una clase derivada a traves de un puntero
		virtual void add(IListable* component) = 0; // Metodo virtual agregar
		virtual void remove(IListable* component) = 0; // Metodo virtual quitar
};

#endif