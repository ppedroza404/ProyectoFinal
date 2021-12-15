// ProyectoFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Curso.h"
#include "Duende.h"
#include "Matricula.h"
#include "Lista_Curso.h"
using namespace std;

int main()
{
    Curso curso0 = Curso("Mate01",3,5);
    Curso curso1 = Curso("Progra01", 6, 12);
    Curso curso2 = Curso("Patrones", 5, 10);
    Curso curso3 = Curso("Projecto1", 10, 30);
    Curso curso4 = Curso("Projecto2", 10, 30);
    Curso curso5 = Curso("Projecto3", 10, 30);
    Curso curso6 = Curso("Projecto4", 10, 30);
    Curso curso7 = Curso("Projecto5", 10, 30);


    Duende duende1 = Duende(1, "Happy", 8, false);
    Duende duende2 = Duende(2, "Grumpy", 10, true);

    Lista_Curso l1 = Lista_Curso();
    l1.agregar(curso1.getPCurso());
    l1.agregar(curso3.getPCurso());
    l1.agregar(curso2.getPCurso());
    l1.agregar(curso5.getPCurso());
    l1.agregar(curso4.getPCurso());
    l1.agregar(curso6.getPCurso());
    l1.agregar(curso7.getPCurso());
    
  
    l1.desplegar();
    cout << l1.existe(4) << endl;
    cout << l1.getCurso(4)->toString() << endl;

    l1.Actualizar(4, "Curso Cambio", 100, 100);
    cout << l1.getCurso(4)->toString() << endl;
    cout << l1.eliminar(4) << endl;
    l1.desplegar();
    l1.agregar(curso4.getPCurso());
    l1.desplegar();


    // cout << curso1.toString();
    // curso1.setId(9);
    // cout << curso1.toString(1) << endl;
    // // curso1.setNombre("Ingles02");
    // // cout << curso1.toString(2);
    // // curso1.setCreditos(18);
    // // curso1.sethoras(18);
    // // cout << curso1.toString(3);
    // 
    // cout << duende1.toString(1) << endl;
    // 
    // Matricula matricula1 = Matricula(1,"ana",curso1.getPCurso(),duende1.getPDuende(), 90);
    // Matricula matricula2 = Matricula(2,"Mario",curso2.getPCurso(),duende1.getPDuende(),70);
    // cout << matricula1.toString() << endl;
    // cout << matricula2.toString() << endl;
    // matricula2.setDuende(duende2.getPDuende());
    // cout << matricula1.toString(1) << endl;
    // cout << matricula2.toString(2) << endl;
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
