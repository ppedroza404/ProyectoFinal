#pragma once

#include <iostream>
#include <stdlib.h>
#include "Curso.h"
#include "Duende.h"
using namespace std;

class Matricula
{
private:
	int id;
	string profesor;
	int nota;
	Curso* curso;
	Duende* duende;
	
public:
	Matricula(); // constructor vacio.
	Matricula(int,string,int,Curso*,Duende*); // constructor con parametros.

	// Getters.
	int getId();
	string getProfesor();
	int getNota();
	Matricula* getPMatricula();
	Curso* getPCurso();
	Duende* getPDuende();

	// Setters.
	void setId(int);
	void setProfesor(string);
	void setNota(int);
	void setCurso(Curso*);
	void setDuende(Duende*);

	// Output.
	string toString();
	string toString(int);
};
