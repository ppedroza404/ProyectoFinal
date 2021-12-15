#include "nodoDM.h"

nodoDM::nodoDM()
{
	this->curso = NULL;
	this->duende = NULL;
	this->sgte = NULL;
	this->anterior = NULL;
}

nodoDM::nodoDM(Curso* curso, Duende* duende)
{
	this->curso = curso;
	this->duende = duende;
	this->sgte = NULL;
	this->anterior = NULL;
}

Curso* nodoDM::getCurso()
{
	return this->curso;
}

Duende* nodoDM::getDuende()
{
	return this->duende;
}

nodoDM* nodoDM::getSgte()
{
	return this->sgte;
}

nodoDM* nodoDM::getAnterior()
{
	return this->anterior;
}

void nodoDM::setCurso(Curso* _curso)
{
	this->curso = _curso;
}

void nodoDM::setDuende(Duende* _duende)
{
	this->duende = _duende;
}

void nodoDM::setSgte(nodoDM* _sgte)
{
	this->sgte = _sgte;
}

void nodoDM::setAnterior(nodoDM* _anterior)
{
	this->anterior = _anterior;
}
