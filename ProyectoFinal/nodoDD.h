#pragma once

#include <iostream>
#include <stdlib.h>
#include "Duende.h"
using namespace std;

class nodoDD
{
private:
	Duende* duende;
	nodoDD* sgte;
	nodoDD* anterior;

public:
	nodoDD();
	nodoDD(Duende* duende); // puntero al siguiente nodo;

	Duende* getDuende();
	nodoDD* getSgte();
	nodoDD* getAnterior();

	void setDuende(Duende* duende);
	void setSgte(nodoDD* sgte);
	void setAnterior(nodoDD* anterior);
};

