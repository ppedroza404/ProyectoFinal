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
	~Curso();
	Curso(string nombre,int creditos,int horas); // constructor con parametros.

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
	void setHoras(int);

	// Output.
	string toString();
	string toString(int);
};
