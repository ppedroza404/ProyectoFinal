#pragma once

#include <iostream>
#include <stdlib.h>
#include "Curso.h"


using namespace std;

class nodoS
{
private:
	Curso* curso;
	nodoS* sgte;
public:
	nodoS();
	nodoS(Curso* curso); // puntero al siguiente nodo;

	Curso* getCurso();
	nodoS* getSgte();

	void setCurso(Curso* curso);
	void setSgte(nodoS* sgte);
};