#include "Lista_Matricula.h"

Lista_Matricula::Lista_Matricula()
{
	this->cab = NULL;
	this->largo = 0;
}

Lista_Matricula::~Lista_Matricula()
{
}

nodoDM* Lista_Matricula::getCab()
{
	return this->cab;
}

int Lista_Matricula::getLargo()
{
	return this->largo;
}

void Lista_Matricula::setCab(nodoDM* _pnodoD)
{
	this->cab = _pnodoD;
}

void Lista_Matricula::setLargo(int _largo)
{
	this->largo = _largo;
}

nodoDM* Lista_Matricula::dirDato(int _idMatricula)
{
	nodoDM* dir = NULL;
	nodoDM* aux = getCab();


	for (int i = 1; i <= getLargo(); i++) {
		if (aux->getMatricula()->getId() == _idMatricula) {
			dir = aux;
		}
		aux = aux->getSgte();
	}
	return dir;
}

bool Lista_Matricula::matricular(Lista_Duende* _lDuendes, Lista_Curso* _lCursos, string _profesor, int idCurso, int idDuende)
{
	bool agregado = false;
	Lista_Duende* listaActualDuendes = _lDuendes;
	Lista_Curso* listaActualCursos = _lCursos;

	// Buscamos el Duende y el Curso
	Duende* duendeAux = listaActualDuendes->getDuende(idDuende);
	Curso* cursoAux = listaActualCursos->getCurso(idCurso);

	// Creamos un puntero a la matricula
	Matricula* matriculaActual = new Matricula(0, _profesor, cursoAux, duendeAux,0);

	nodoDM* nuevo = new nodoDM(matriculaActual);
	nodoDM* aux = getCab();


	if (!esVacia()) {
		while (aux->getSgte() !=NULL) {
			aux = aux->getSgte();
		}
			
		aux->setSgte(nuevo);
		nuevo->setAnterior(aux);
		nuevo->getMatricula()->setId(nuevo->getAnterior()->getMatricula()->getId() + 1);
		setLargo(getLargo() + 1);
		agregado = true;
	}
	else {
		setCab(nuevo);
		agregado = true;
		setLargo(getLargo() + 1);
		agregado = true;
	}

	return agregado;
}

bool Lista_Matricula::asignarNota(int idMatricula, int _nota) // implementar
{
	return false;
}

bool Lista_Matricula::retirar(int idMatricula) // implementar
{
	return false;
}

void Lista_Matricula::desplegar()
{
	nodoDM* aux = getCab();
	std::cout << "Lista de duendes:" << std::endl;
	for (int i = 1; i <= getLargo(); i++) {
		cout << aux->getMatricula()->toString() << endl;
		aux = aux->getSgte();
	}
}

bool Lista_Matricula::esVacia()
{
	return this->cab == NULL;;
}

bool Lista_Matricula::existe(int _idMatricula) 
{
	bool existe = false;
	nodoDM* aux = getCab();

	while (aux->getSgte() != NULL && !existe) {
		aux = aux->getSgte();
		if (aux->getMatricula()->getId() == _idMatricula) { existe = true; }
	}

	return existe;
}

Matricula* Lista_Matricula::getMatricula(int _idMatricula) 
{
	nodoDM* aux = getCab();
	Matricula* ans = new Matricula();

	while (aux->getSgte() != NULL) {
		
		if (aux != NULL && aux->getMatricula()->getId() == _idMatricula) {
			ans = aux->getMatricula();
		}
		aux = aux->getSgte();
	}

	return ans;
}

bool Lista_Matricula::Actualizar(int idMatricula, string profesor) 
{
	bool actualizado = false;
	Matricula* matriculaTemp = getMatricula(idMatricula);

	if (matriculaTemp->getPCurso() != NULL) {
		matriculaTemp->setProfesor(profesor);
		actualizado = true;
	}
	return actualizado;
}

Lista_Matricula* Lista_Matricula::getPunteroLista() 
{
	return this;
}
