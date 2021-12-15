#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

class nodoS
{
private:
	int dato;
	nodoS* sgte;
public:
	nodoS();
	nodoS(int); // puntero al siguiente nodo;

	int getDato();
	nodoS* getSgte();

	void setDato(int dato);
	void setSgte(nodoS* sgte);
};