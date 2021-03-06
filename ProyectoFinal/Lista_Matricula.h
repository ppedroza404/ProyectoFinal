#pragma once
#include "nodoDM.h"
#include "Matricula.h"
#include "Lista_Duende.h"
#include "Lista_Curso.h"

class Lista_Matricula
{
private:
	nodoDM* cab;
	int largo;

public:
	Lista_Matricula();
	~Lista_Matricula();

	nodoDM* getCab();
	int getLargo();

	void setCab(nodoDM* pnodoD);
	void setLargo(int largo);

	nodoDM* dirDato(int idMatricula);
	bool matricular(Lista_Duende* lDuendes, Lista_Curso* lCursos,string profesor, int idCurso,int idDuende);
	bool asignarNota(int idMatricula, int _nota);

	bool retirar(int idMatricula);
	void desplegar();
	

	// Operaciones
	bool esVacia();
	bool existe(int idMatricula);
	Matricula* getMatricula(int idMatricula);
	bool Actualizar(int idMatricula, string profesor);	
	Lista_Matricula* getPunteroLista();
};

