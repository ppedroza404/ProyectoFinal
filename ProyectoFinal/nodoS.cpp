#include "nodoS.h"

nodoS::nodoS()
{
	this->curso = NULL;
	this->sgte = NULL;
}

nodoS::nodoS(Curso* _curso)
{
	this->curso = _curso;
	this->sgte = NULL;
}

Curso* nodoS::getCurso()
{
	return this->curso;
}

nodoS* nodoS::getSgte()
{
	return this->sgte;
}

void nodoS::setCurso(Curso* _curso)
{
	this->curso = _curso;
}

void nodoS::setSgte(nodoS* _sgte)
{
	this->sgte = _sgte;
}
