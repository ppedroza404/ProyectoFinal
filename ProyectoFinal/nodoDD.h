#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

class nodoDD
{
private:
	int dato;
	nodoDD* sgte;
	nodoDD* anterior;

public:
	nodoDD();
	nodoDD(int); // puntero al siguiente nodo;

	int getDato();
	nodoDD* getSgte();
	nodoDD* getAnterior();

	void setDato(int dato);
	void setSgte(nodoDD* sgte);
	void setAnterior(nodoDD* anterior);
};

