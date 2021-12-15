#include "Lista_Duende.h"
#include "nodoDD.h"

Lista_Duende::Lista_Duende()
{
	this->cab = NULL;
	this->largo = 0;
}

Lista_Duende::~Lista_Duende()
{
}

nodoDD* Lista_Duende::getCab()
{
	return this->cab;
}

int Lista_Duende::getLargo()
{
	return this->largo;
}

void Lista_Duende::setCab(nodoDD* _pnodoD)
{
	this->cab = _pnodoD;
}

void Lista_Duende::setLargo(int _largo)
{
	this->largo = _largo;
}

bool Lista_Duende::esVacia()
{
	return this->cab == NULL;
}

Duende* Lista_Duende::getDuende(int idDuende)
{
	Duende* duende = NULL;

	if (!esVacia()) {
		nodoDD* aux = getCab();
		for (int i = 1; i <= getLargo(); i++) {
			if (aux->getDuende()->getId() == idDuende) {
				duende = aux->getDuende();
			}
			aux = aux->getSgte();
		}
	}
	return duende;
}

bool Lista_Duende::existe(int idDuende)
{
	bool existe = false;
	nodoDD* nuevo = new nodoDD();

	if (!esVacia()) {
		nodoDD* aux = getCab();
		for (int i = 1; i <= getLargo(); i++) {
			if (aux->getDuende()->getId() == idDuende) {
				existe = true;
			}
			aux = aux->getSgte();
		}
	}
	return existe;
}

bool Lista_Duende::agregar(Duende* _pDuende)
{
	bool agregado = false;
	nodoDD* nuevo = new nodoDD(_pDuende);

	if (!esVacia()) {

		nuevo->setSgte(getCab());
		nuevo->setAnterior(getCab()->getAnterior());

		getCab()->getAnterior()->setSgte(nuevo);
		getCab()->setAnterior(nuevo);

		nuevo->getDuende()->setId(nuevo->getAnterior()->getDuende()->getId() + 1);
		setLargo(getLargo() + 1);
		agregado = true;

	}
	else {
		setCab(nuevo);
		nuevo->setSgte(nuevo);
		nuevo->setAnterior(nuevo);
		agregado = true;
		setLargo(getLargo() + 1);
	}

	return agregado;
}



void Lista_Duende::Actualizar(int idDuende, string nombre, int edad, bool condicion_becado)
{
	if (existe(idDuende)) {
		Duende* tempDuende = getDuende(idDuende);
		tempDuende->setNombre(nombre);
		tempDuende->setEdad(edad);
		tempDuende->setestadoBecado(condicion_becado);
	}
}

nodoDD* Lista_Duende::dirDato(int idDuende)
{
	nodoDD* dir = NULL;
	nodoDD* aux = getCab();


	for (int i = 1; i <= getLargo(); i++) {
		if (aux->getDuende()->getId() == idDuende) {
			dir = aux;
		}
		aux = aux->getSgte();
	}
	return dir;
}

bool Lista_Duende::eliminar(int idDuende)
{
	bool eliminado = false;
	nodoDD* aux = dirDato(idDuende);
	if (aux != NULL) {

		if (aux == getCab()) { 
			setCab(aux->getSgte());
		}
		else {
			aux->getAnterior()->setSgte(aux->getSgte());
		}

		if (aux->getSgte() != NULL) {
			aux->getSgte()->setAnterior(aux->getAnterior());
		}

		delete aux;
		setLargo(getLargo() - 1);
		eliminado = true;
	}
	return eliminado;
}

void Lista_Duende::desplegar()
{
	nodoDD* aux = getCab();
	std::cout << "Lista de duendes:" << std::endl;
	for (int i = 1; i <= getLargo(); i++) {
		cout << aux->getDuende()->toString() << endl;
		aux = aux->getSgte();
	}
}

void Lista_Duende::desplegarBecados()
{
	nodoDD* aux = getCab();
	std::cout << "Lista de duendes:" << std::endl;
	for (int i = 1; i <= getLargo(); i++) {
		if (aux->getDuende()->getestadoBecado() == true) {
			cout << aux->getDuende()->toString() << endl;
		}
		aux = aux->getSgte();
	}
}