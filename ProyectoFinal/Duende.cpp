#include "Duende.h"
#include <stdlib.h>
#include <string>
using namespace std;

Duende::Duende()
{
	this->id = 0;
	this->nombre = "NULL";
	this->edad = 0;
	this->estadoBecado = false;
}

Duende::Duende(string _nombre, int _edad, bool _becado)
{
	this->id = 0;
	this->nombre = _nombre;
	this->edad = _edad;
	this->estadoBecado = _becado;
}

int Duende::getId()
{
	return this->id;
}

string Duende::getNombre()
{
	return this->nombre;
}

int Duende::getEdad()
{
	return this->edad;
}

int Duende::getestadoBecado()
{
	return this->estadoBecado;
}

Duende* Duende::getPDuende()
{
	return this;
}

void Duende::setId(int _id)
{
	this->id = _id;
}

void Duende::setNombre(string _nombre)
{
	this->nombre = _nombre;
}

void Duende::setEdad(int _edad)
{
	this->edad = _edad;
}

void Duende::setestadoBecado(bool _becado)
{
	this->estadoBecado = _becado;
}

string Duende::toString()
{
	string id = to_string(getId());
	string edad = to_string(getEdad());
	string estadoBecado = to_string(getestadoBecado());
	return	"Duende : { Id: \"" + id + "\", Nombre : \"" + this->nombre + "\", Edad : \"" + edad + "\", Becado : \"" + estadoBecado + "\" }";
}

string Duende::toString(int _serie)
{
	string id = to_string(getId());
	string edad = to_string(getEdad());
	string estadoBecado = to_string(getestadoBecado());
	return	to_string(_serie) + " : { Id: \"" + id + "\", Nombre : \"" + this->nombre + "\", Edad : \"" + edad + "\", Becado : \"" + estadoBecado + "\" }";
}