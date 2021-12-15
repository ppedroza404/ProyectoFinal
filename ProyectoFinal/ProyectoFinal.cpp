// ProyectoFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Curso.h"
#include "Duende.h"
#include "Matricula.h"
using namespace std;

int main()
{
    Curso curso1 = Curso(01,"Mate01",3,5);
    Curso curso2 = Curso(02, "Progra01", 6, 12);
    Curso curso3 = Curso(03, "Patrones", 5, 10);
    Curso curso4 = Curso(04, "Projecto", 10, 30);

    // cout << curso1.toString();
    // curso1.setId(9);
    cout << curso1.toString(1) << endl;
    // curso1.setNombre("Ingles02");
    // cout << curso1.toString(2);
    // curso1.setCreditos(18);
    // curso1.sethoras(18);
    // cout << curso1.toString(3);
    Duende duende1 = Duende(1,"Happy",8,false);
    Duende duende2 = Duende(2, "Grumpy", 10, true);
    cout << duende1.toString(1) << endl;

    Matricula matricula1 = Matricula(1,"ana",curso1.getPCurso(),duende1.getPDuende(), 90);
    Matricula matricula2 = Matricula(2,"Mario",curso2.getPCurso(),duende1.getPDuende(),70);
    cout << matricula1.toString() << endl;
    cout << matricula2.toString() << endl;
    matricula2.setDuende(duende2.getPDuende());
    cout << matricula1.toString(1) << endl;
    cout << matricula2.toString(2) << endl;
    cin;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
