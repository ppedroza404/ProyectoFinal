#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

class nodoDM
{
private:
	int dato;
	nodoDM* sgte;
	nodoDM* anterior;

public:
	nodoDM();
	nodoDM(int); // puntero al siguiente nodo;

	int getDato();
	nodoDM* getSgte();
	nodoDM* getAnterior();

	void setDato(int dato);
	void setSgte(nodoDM* sgte);
	void setAnterior(nodoDM* anterior);
};

