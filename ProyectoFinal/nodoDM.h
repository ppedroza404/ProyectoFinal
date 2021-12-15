#pragma once

#include <iostream>
#include <stdlib.h>
#include "Duende.h"
#include "Curso.h"
using namespace std;

class nodoDM
{
private:
	Curso* curso;
	Duende* duende;
	nodoDM* sgte;
	nodoDM* anterior;

public:
	nodoDM();
	nodoDM(Curso* curso,Duende* duende); // puntero al siguiente nodo;

	Curso* getCurso();
	Duende* getDuende();
	nodoDM* getSgte();
	nodoDM* getAnterior();

	void setCurso(Curso* curso);
	void setDuende(Duende* duende);
	void setSgte(nodoDM* sgte);
	void setAnterior(nodoDM* anterior);
};

