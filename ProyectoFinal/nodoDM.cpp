#include "nodoDM.h"

nodoDM::nodoDM()
{
	this->matricula = NULL;
	this->sgte = NULL;
	this->anterior = NULL;
}

nodoDM::nodoDM(Matricula* _matricula)
{
	this->matricula = _matricula;
	this->sgte = NULL;
	this->anterior = NULL;
}

Curso* nodoDM::getCurso()
{
	return this->matricula->getPCurso();
}

Duende* nodoDM::getDuende()
{
	return this->matricula->getPDuende();
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
	this->matricula->setCurso(_curso);
}

void nodoDM::setDuende(Duende* _duende)
{
	this->matricula->setDuende(_duende);
}

void nodoDM::setSgte(nodoDM* _sgte)
{
	this->sgte = _sgte;
}

void nodoDM::setAnterior(nodoDM* _anterior)
{
	this->anterior = _anterior;
}
