#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

class Duende
{
private:
	int id;
	string nombre;
	int edad;
	bool estadoBecado;
public:
	Duende(); // constructor vacio.
	Duende(int id, string nombre, int edad, bool estadoBecado); // constructor con parametros.

	// Getters.
	int getId();
	string getNombre();
	int getEdad();
	int getestadoBecado();
	Duende* getPDuende();

	// Setters.
	void setId(int);
	void setNombre(string);
	void setEdad(int);
	void setestadoBecado(bool);

	// Output.
	string toString();
	string toString(int);
};
