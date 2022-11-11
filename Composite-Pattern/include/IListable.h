#ifndef ILISTABLE_H
#define ILISTABLE_H

// Interfaz Listable
class IListable
{
	public:
		virtual ~IListable(){}; // Destructor virtual para eliminar una instancia de una clase derivada a traves de un puntero
		virtual void list(int depth) = 0; // Metodo virtual listar
};

#endif