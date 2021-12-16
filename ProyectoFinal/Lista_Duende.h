#pragma once
#include "nodoDD.h"

class Lista_Duende
{
private:
	nodoDD* cab;
	int largo;

public:
	Lista_Duende();
	~Lista_Duende();

	nodoDD* getCab();
	int getLargo();

	void setCab(nodoDD* pnodoD);
	void setLargo(int largo);

	nodoDD* dirDato(int idDuende);
	bool agregar(Duende* pDuende);
	bool eliminar(int idDuende);
	void desplegar();
	void desplegarBecados();

	// Operaciones
	bool esVacia();
	void Actualizar(int idDuende, string nombre, int edad, bool condicion_becado);
	bool existe(int idDuende);
	Duende* getDuende(int idDuende);
	Lista_Duende* getPunteroLista();

};

