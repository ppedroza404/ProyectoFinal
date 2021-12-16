#pragma once

#include <iostream>
#include <stdlib.h>
#include "Matricula.h"

using namespace std;

class nodoDM
{
private:
	Matricula* matricula;
	nodoDM* sgte;
	nodoDM* anterior;

public:
	nodoDM();
	nodoDM(Matricula* pMatricula); // puntero al siguiente nodo;

	Curso* getCurso();
	Duende* getDuende();
	nodoDM* getSgte();
	nodoDM* getAnterior();

	void setCurso(Curso* curso);
	void setDuende(Duende* duende);
	void setSgte(nodoDM* sgte);
	void setAnterior(nodoDM* anterior);
};

