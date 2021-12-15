#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

class Curso
{
private:
	int id;
	string nombre;
	int creditos;
	int horas;

public:
	Curso(); // constructor vacio.
	Curso(int,string,int,int); // constructor con parametros.

	// Getters.
	int getId();
	string getNombre();
	int getCreditos();
	int getHoras();
	Curso* getPCurso();

	// Setters.
	void setId(int);
	void setNombre(string);
	void setCreditos(int);
	void sethoras(int);

	// Output.
	string toString();
	string toString(int);
};
