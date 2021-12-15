#include "Lista_Curso.h"

bool Lista_Curso::existe(int idCurso)
{
	bool existe = false;	
	nodoS* nuevo = new nodoS();

	if (!esVacia()) {
		nodoS* primero = getCab();
		while (primero->getSgte() != NULL && !existe)
		{
			if (primero->getCurso()->getId() == idCurso) {
				existe = true;
			}
			primero = primero->getSgte();
		}
	}
	return existe;
}

Curso* Lista_Curso::getCurso(int idCurso)
{
	Curso* curso = NULL;
	nodoS* nuevo = new nodoS();

	if (!esVacia()) {
		nodoS* aux = getCab();
		while (aux->getSgte() != NULL && curso == NULL)
		{
			if (aux->getCurso()->getId() == idCurso) {
				curso = aux->getCurso();
			}
			aux = aux->getSgte();
		}
	}
	return curso;
}

Lista_Curso::Lista_Curso()
{
	this->cab = NULL;
	this->largo = 0;
}

Lista_Curso::~Lista_Curso()
{
}

nodoS* Lista_Curso::getCab()
{
	return this->cab;
}

int Lista_Curso::getLargo()
{
	return this->largo;
}

nodoS* Lista_Curso::nodoAnterior(int _idCurso)
{
	{ 
		nodoS* aux = getCab();
		nodoS* ant = NULL;
		while (aux != NULL && aux->getSgte() != NULL && ant == NULL) {
			if (aux->getSgte()->getCurso()->getId() == _idCurso) {
				ant = aux;
			}
			else {
				aux = aux->getSgte();
			}
		}

		return ant;
	}
}


void Lista_Curso::setCab(nodoS* _pnodoS)
{
	this->cab = _pnodoS;
}

void Lista_Curso::setLargo(int _largo)
{
	this->largo = _largo;
}

bool Lista_Curso::agregar(Curso* _pCurso)
{
	bool agregado = false;	
	nodoS* nuevo = new nodoS(_pCurso);

	if (!esVacia()) {
		nodoS* primero = getCab();
		while (primero->getSgte() != NULL)
		{
			primero = primero->getSgte();
		}

		if (primero->getSgte() == NULL) {
			nuevo->getCurso()->setId(primero->getCurso()->getId() + 1);
			setLargo(getLargo() + 1);
			primero->setSgte(nuevo);
			agregado = true;
		}
	
	}
	else {
		setCab(nuevo);
		agregado = true;
	}

	return agregado;
}

bool Lista_Curso::eliminar(int _idCurso)
{
	bool eliminado = false;
	nodoS* aux = NULL; //señalar el nodo que va a ser eliminado

	if (!esVacia()) {

		if (getCab()->getCurso()->getId() == _idCurso) {
			aux = getCab();  //señalar el nodo a eliminar
			setCab(aux->getSgte()); //Reacomodar la lista con el nuevo nodo
		}
		else { //Sirve para eliminar en medio y el último
			nodoS* ant = nodoAnterior(_idCurso);
			if (ant != NULL) {
				aux = ant->getSgte(); //Señalar el nodo a eliminar
				ant->setSgte(aux->getSgte()); //Reacomodar la lista con el nuevo nodo
			}
		}
		if (aux != NULL) {
			delete aux;
			setLargo(getLargo() - 1);
			eliminado = true;
		}
	}
	return  eliminado;
}

void Lista_Curso::desplegar()
{
	nodoS* aux = getCab();
	cout << "Lista de Cursos:" << endl;
	while (aux != NULL) {
		cout << aux->getCurso()->toString() << endl;		 
		aux = aux->getSgte();
	}
}

bool Lista_Curso::esVacia()
{
	return this->cab == NULL;
}

void Lista_Curso::Actualizar(int idCurso, string nombre, int creditos, int horas)
{
	if (existe(idCurso)) {
		Curso* tempCurso = getCurso(idCurso);
		tempCurso->setNombre(nombre);
		tempCurso->setCreditos(creditos);
		tempCurso->setHoras(horas);
	}
}
