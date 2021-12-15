#include "Curso.h"
#include <stdlib.h>
#include <string>
using namespace std;

Curso::Curso()	
{
	this->id = 0;
	this->nombre = "NULL";
	this->creditos = 0;
	this->horas = 0;
}

Curso::Curso(int _id, string _nombre, int _creditos, int _horas)
{
	this->id = _id;
	this->nombre = _nombre;
	this->creditos = _creditos;
	this->horas = _horas;
	
}

int Curso::getId()
{
	return this->id;
}

string Curso::getNombre()
{
	return this->nombre;
}

int Curso::getCreditos()
{
	return this->creditos;
}

int Curso::getHoras()
{
	return this->horas;
}

Curso* Curso::getPCurso()
{
	return this;
}

void Curso::setId(int _id)
{
	this->id = _id;
}

void Curso::setNombre(string _nombre)
{
	this->nombre = _nombre;
}

void Curso::setCreditos(int _creditos)
{
	this->creditos = _creditos;
}

void Curso::sethoras(int _horas)
{
	this->horas = _horas;
}

string Curso::toString()
{
	string id = to_string(getId());
	string creditos = to_string(getCreditos());
	string horas = to_string(getHoras());
	return	"Curso : { Id: \"" + id + "\", Nombre : \"" + this->nombre + "\", Creditos : \"" + creditos + "\", Horas : \"" + horas +"\" }";
}

string Curso::toString(int _serie)
{
	string id = to_string(getId());
	string creditos = to_string(getCreditos());
	string horas = to_string(getHoras());
	return	to_string(_serie) + " : { Id: \"" + id + "\", Nombre : \"" + this->nombre + "\", Creditos : \"" + creditos + "\", Horas : \"" + horas + "\" }";
}