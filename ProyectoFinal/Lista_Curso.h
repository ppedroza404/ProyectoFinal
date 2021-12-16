#pragma once
#include "nodoS.h"

class Lista_Curso
{
private:
	nodoS* cab; 
	int largo;
	
	// Operaciones miscelaneas
	

public:
	Lista_Curso();
	~Lista_Curso();

	nodoS* getCab();
	int getLargo();
	nodoS* nodoAnterior(int idCurso);

	void setCab(nodoS* pnodoS);
	void setLargo(int largo);

	
	bool agregar(Curso* pCurso);
	bool eliminar(int idCurso);
	void desplegar();

	// Operaciones
	bool esVacia();
	void Actualizar(int idCurso, string nombre, int creditos, int horas);
	bool existe(int idCurso);
	Curso* getCurso(int idCurso);
	Lista_Curso* getPunteroLista();



};

