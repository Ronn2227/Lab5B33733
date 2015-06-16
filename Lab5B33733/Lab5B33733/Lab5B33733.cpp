// Lab5B33733.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lista.h"
#include "ElementoInt.h"
#include "ElementoIntInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int)time(NULL));

	// Nombres posibles a elegir para las personas.
	string nombres[20] = {"Maria", "Juan", "Ana", "Pedro", "Alejandra", "Ronald", "Ximena", "Alfredo", "Amanda", "Jose",
						  "Elsa", "Diego", "Amaia", "Esteban", "Elena", "Antonio", "Stephanie", "Ruben", "Tiana", "Elias"};

	int cantidadElementos = rand() % 41 + 15; // Setea cantidad de Elementos de la Lista en un valor aleatorio entre 15 y 50.
	Lista enteros;
	for (int i = 0; i < cantidadElementos; i++){
		Elemento * nodo = new ElementoInt(rand() % 100);

		int cualInsercion = rand() % 3;

		if (cualInsercion == 0){ // Elige de manera aleatoria si incertar en la cabeza, en una posicion o en la cola.
			enteros.insertarCabeza(nodo);
		}
		else if (cualInsercion == 1){
			enteros.insertarElemento(nodo, rand() % (enteros.getSize() + 1)); // Incerta en una posicion aleatoria entre 0 y el tamaño de la lista.
		}
		else {
			enteros.insertarCola(nodo);
		}
	}

	cout << "Lista de enteros:" << endl;
	cout << enteros << endl;

	for (int i = 0; i < 10; i++){
		int cualRemocion = rand() % 3;

		if (cualRemocion == 0){ // Elige de manera aleatoria si remover la cabeza, una posicion o la cola.
			enteros.removerCabeza();
		}
		else if (cualRemocion == 1){
			enteros.removerElemento(rand() % (enteros.getSize() + 1)); // Renueve en una posicion aleatoria entre 0 y el tamaño de la lista.
		}
		else {
			enteros.removerCola();
		}
	}

	cout << "Lista de enteros con 10 remociones aleatorias:" << endl;
	cout << enteros << endl;

	cantidadElementos = rand() % 41 + 15; // Setea cantidad de Elementos de la Lista en un valor aleatorio entre 15 y 50.
	Lista intints;
	for (int i = 0; i < cantidadElementos; i++){
		Elemento * nodo = new ElementoIntInt(rand() % 100, rand() % 100);

		int cualInsercion = rand() % 3;

		if (cualInsercion == 0){ // Elige de manera aleatoria si incertar en la cabeza, en una posicion o en la cola.
			intints.insertarCabeza(nodo);
		}
		else if (cualInsercion == 1){
			intints.insertarElemento(nodo, rand() % (intints.getSize() + 1)); // Incerta en una posicion aleatoria entre 0 y el tamaño de la lista.
		}
		else {
			intints.insertarCola(nodo);
		}
	}

	cout << "Lista de intints:" << endl;
	cout << intints << endl;

	for (int i = 0; i < 10; i++){
		int cualRemocion = rand() % 3;

		if (cualRemocion == 0){ // Elige de manera aleatoria si remover la cabeza, una posicion o la cola.
			intints.removerCabeza();
		}
		else if (cualRemocion == 1){
			intints.removerElemento(rand() % (intints.getSize() + 1)); // Remueve en una posicion aleatoria entre 0 y el tamaño de la lista.
		}
		else {
			intints.removerCola();
		}
	}

	cout << "Lista de intints con 10 remociones aleatorias:" << endl;
	cout << intints << endl;

	cantidadElementos = rand() % 41 + 15; // Setea cantidad de Elementos de la Lista en un valor aleatorio entre 15 y 50.
	Lista doubles;
	for (int i = 0; i < cantidadElementos; i++){
		double d = (double)rand() * 100 / (double)RAND_MAX; // Genera double aleatorio entre 0 y 100.
		Elemento * nodo = new ElementoDouble(d);
		int cualInsercion = rand() % 3;

		if (cualInsercion == 0){ // Elige de manera aleatoria si incertar en la cabeza, en una posicion o en la cola.
			doubles.insertarCabeza(nodo);
		}
		else if (cualInsercion == 1){
			doubles.insertarElemento(nodo, rand() % (doubles.getSize() + 1)); // Incerta en una posicion aleatoria entre 0 y el tamaño de la lista.
		}
		else {
			doubles.insertarCola(nodo);
		}
	}

	cout << "Lista de doubles:" << endl;
	cout << doubles << endl;

	for (int i = 0; i < 10; i++){ 
		int cualRemocion = rand() % 3;

		if (cualRemocion == 0){ // Elige de manera aleatoria si remover la cabeza, una posicion o la cola.
			doubles.removerCabeza();
		}
		else if (cualRemocion == 1){
			doubles.removerElemento(rand() % (doubles.getSize() + 1)); // Remueve en una posicion aleatoria entre 0 y el tamaño de la lista.
		}
		else {
			doubles.removerCola();
		}
	}

	cout << "Lista de doubles con 10 remociones aleatorias:" << endl;
	cout << doubles << endl;

	cantidadElementos = rand() % 41 + 15; // Setea cantidad de Elementos de la Lista en un valor aleatorio entre 15 y 50.
	Lista personas;
	for (int i = 0; i < cantidadElementos; i++){
		string name = nombres[rand() % 20]; // Elige aleatoriamente entre los 20 nombres.
		int id = rand() % 100; // Genera un id aleatorio entre 0 y 100.
		Persona* per = new Persona(name, id); // Crea persona con valores aleatorios.
		Elemento * nodo = new ElementoPersona(per);

		int cualInsercion = rand() % 3;

		if (cualInsercion == 0){ // Elige de manera aleatoria si incertar en la cabeza, en una posicion o en la cola.
			personas.insertarCabeza(nodo);
		}
		else if (cualInsercion == 1){
			personas.insertarElemento(nodo, rand() % (personas.getSize() + 1)); // Incerta en una posicion aleatoria entre 0 y el tamaño de la lista.
		}
		else {
			personas.insertarCola(nodo);
		}
	}

	cout << "Lista de personas:" << endl;
	cout << personas << endl;

	for (int i = 0; i < 10; i++){
		int cualRemocion = rand() % 3;

		if (cualRemocion == 0){ // Elige de manera aleatoria si remover la cabeza, una posicion o la cola.
			personas.removerCabeza();
		}
		else if (cualRemocion == 1){
			personas.removerElemento(rand() % (personas.getSize() + 1)); // Remueve en una posicion aleatoria entre 1 y el tamaño de la lista.
		}
		else {
			personas.removerCola();
		}
	}

	cout << "Lista de personas con 10 remociones aleatorias:" << endl;
	cout << personas << endl;

	system("pause");
	return 0;
}

