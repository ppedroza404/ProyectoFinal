#include "Matricula.h"
#include <string>;

Matricula::Matricula()
{
	this->id = 0;
	this->profesor = "NULL";
	this->nota = 0;
	this->curso = NULL;
	this->duende = NULL;
}

Matricula::Matricula(int _id, string _profesor, Curso* _pCurso, Duende* _pDuende, int _nota)
{
	this->id = _id;
	this->profesor = _profesor;
	this->nota = _nota;
	this->curso = _pCurso;
	this->duende = _pDuende;
}

int Matricula::getId()
{
	return this->id;
}

string Matricula::getProfesor()
{
	return this->profesor;
}

int Matricula::getNota()
{
	return this->nota;
}

Matricula* Matricula::getPMatricula()
{
	return this;
}

Curso* Matricula::getPCurso()
{
	return this->curso;
}

Duende* Matricula::getPDuende()
{
	return this->duende;
}

void Matricula::setId(int _id)
{
	this->id = _id;
}

void Matricula::setProfesor(string _profesor)
{
	this->profesor = _profesor;
}

void Matricula::setNota(int _nota)
{
	this->nota = _nota;
}

void Matricula::setCurso(Curso* _pCurso)
{
	this->curso = _pCurso;
}

void Matricula::setDuende(Duende* _pDuende)
{
	this->duende = _pDuende;
}

string Matricula::toString()
{
	string id = to_string(getId());
	string nota = to_string(getNota());

	return	"Matricula { Id: \"" + id + "\", Profesor : \"" + this->profesor  + "\" , " + getPCurso()->toString() + " , " + getPDuende()->toString()  + ", Nota : \"" + nota + "\" }";
}

string Matricula::toString(int _serie)
{
	string id = to_string(getId());
	string nota = to_string(getNota());

	return	to_string(_serie) + " : { Id: \"" + id + "\", Profesor : \"" + this->profesor + "\" , " + getPCurso()->toString() + " , " + getPDuende()->toString() + ", Nota : \"" + nota + "\" }";
}

