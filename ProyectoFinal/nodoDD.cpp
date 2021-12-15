#include "nodoDD.h"

nodoDD::nodoDD()
{
}

nodoDD::nodoDD(Duende* _duende)
{
	this->duende = _duende;
	this->sgte = NULL;
}

Duende* nodoDD::getDuende()
{
	return this->duende;
}

nodoDD* nodoDD::getSgte()
{
	return this->sgte;
}

nodoDD* nodoDD::getAnterior()
{
	return this->anterior;
}

void nodoDD::setDuende(Duende* duende)
{
	this->duende = duende;
}

void nodoDD::setSgte(nodoDD* sgte)
{
	this->sgte = sgte;
}

void nodoDD::setAnterior(nodoDD* anterior)
{
	this->anterior = anterior;
}
