// ProyectoFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Curso.h"
#include "Duende.h"
#include "Matricula.h"
#include "Lista_Curso.h"
#include "Lista_Duende.h"
#include "Lista_Matricula.h"
#include <string>

using namespace std;

int main()
{

    Lista_Curso lc = Lista_Curso();
    Lista_Duende ld = Lista_Duende();
    Lista_Matricula lm = Lista_Matricula();

    int opcion;
    bool repetir = true;

    //DATOS DEL DUENDE
    Duende* nuevoDuende;
    int idDuende;
    string nombre;
    int edad;
    bool condicion_becado = false;

    //DATOS DEL CURSO
    Curso* NuevoCurso;
    int idCurso;
    int creditos;
    int horas;

    //DATOS DE LA Matricula
    Matricula* NuevaMatricula;
    int idMatricula;
    string profesor;
    int nota;

    do {

        cout << "\n\n************************" << endl;
        cout << "**  Menu de Principal**" << endl;
        cout << "************************" << endl;
        cout << "1. Menu de duendes" << endl;
        cout << "2. Menu de cursos" << endl;
        cout << "3. Menu de matriculas" << endl;
        cout << "4. Salir" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) {

            //Texto del menú que se verá cada vez
            cout << "\n\n************************" << endl;
            cout << "**  Menu de Duendes **" << endl;
            cout << "************************" << endl;
            cout << "1. Agregar nuevo duende" << endl;
            cout << "2. Modificar duende" << endl;
            cout << "3. Buscar duende" << endl;
            cout << "4. Eliminar duende" << endl;
            cout << "5. Ver lista de duendes" << endl;
            cout << "6. Ver lista de duendes becados" << endl;
            cout << "0. Retroceder" << endl;

            cout << "\nIngrese una opcion: ";
            cin >> opcion;
            system("CLS");

            switch (opcion) {
            case 1:

                cout << "\nIngrese el nombre del duende: ";
                cin >> nombre;

                cout << "\nIngrese la edad del duende: ";
                cin >> edad;

                cout << "\nIngrese la condicion de becado del duende (0-Falso, 1-Verdadero): ";
                cin >> condicion_becado;
                nuevoDuende = new Duende(nombre, edad, condicion_becado);
                ld.agregar(nuevoDuende);
                break;

            case 2:
                cout << "\nIngrese el id del duende a modificar: ";
                cin >> idDuende;

                if (ld.existe(idDuende)) {

                    cout << "\nIngrese el nombre del duende: ";
                    cin >> nombre;

                    cout << "\nIngrese la edad del duende: ";
                    cin >> edad;

                    cout << "\nIngrese la condicion de becado del duende (1-Verdadero, 2-Falso): ";
                    cin >> condicion_becado;

                    ld.Actualizar(idDuende, nombre, edad, condicion_becado);
                }
                else {
                    cout << "\nEl duende " + to_string(idDuende) + " No esta registrado";
                }
                break;

            case 3:
                cout << "\nIngrese el id del duende: ";
                cin >> idDuende;

                if (ld.existe(idDuende)) {
                    cout << ld.getDuende(idDuende)->toString() << endl;
                }
                else {
                    cout << "\nEl duende " + to_string(idDuende) + " No esta registrado";
                }
                
                break;
            case 4:
                cout << "\nIngrese el id del duende a eliminar: ";
                cin >> idDuende;

                if (ld.existe(idDuende)) {
                    ld.eliminar(idDuende);
                }
                else {
                    cout << "\nEl duende " + to_string(idDuende) + " No esta registrado";
                }
                
                break;
            case 5:
                ld.desplegar();
                break;
            case 6:
                ld.desplegarBecados();
                break;
            case 0:
                repetir = true;
                break;
            default:
                cout << "Opcion Incorrecta";
                break;
            }

        }
        else if (opcion == 2) {
            //Texto del menú que se verá cada vez
            cout << "\n\n************************" << endl;
            cout << "**  Menu de Cursos **" << endl;
            cout << "************************" << endl;
            cout << "1. Agregar un nuevo curso" << endl;
            cout << "2. Actualizar un curso" << endl;
            cout << "3. Buscar curso" << endl;
            cout << "4. Eliminar curso" << endl;
            cout << "5. Ver lista de cursos" << endl;
            cout << "0. Retroceder" << endl;

            cout << "\nIngrese una opcion: ";
            cin >> opcion;
            system("CLS");

            switch (opcion) {
            case 1:

                cout << "\nIngrese el nombre del curso: ";
                cin >> nombre;

                cout << "\nIngrese la cantidad de creditos del curso: ";
                cin >> creditos;

                cout << "\nIngrese la cantidad de horas del curso: ";
                cin >> horas;

                NuevoCurso = new Curso(nombre, creditos, horas);
                lc.agregar(NuevoCurso);
                break;

            case 2:
                cout << "\nIngrese el id del curso a modificar: ";
                cin >> idCurso;

                if (lc.existe(idCurso)) {
                    cout << "\nIngrese el nombre del curso: ";
                    cin >> nombre;

                    cout << "\nIngrese la cantidad de creditos del curso: ";
                    cin >> creditos;

                    cout << "\nIngrese la cantidad de horas del curso: ";
                    cin >> horas;

                    lc.Actualizar(idCurso, nombre, creditos, horas);
                }
                else {
                    cout << "\nEl curso " + to_string(idCurso) + " No esta registrado";
                }

                break;

            case 3:
                cout << "\nIngrese el id del curso: ";
                cin >> idCurso;
               
                if (lc.existe(idCurso)) {
                    cout << lc.getCurso(idCurso)->toString() << endl;
                }else {
                    cout << "\nEl curso " + to_string(idCurso) + " No esta registrado";
                }

                break;
            case 4:
                cout << "\nIngrese el id del curso a eliminar: ";
                cin >> idCurso;

                if (lc.existe(idCurso)) {
                    lc.eliminar(idCurso);
                }
                else {
                    cout << "\nEl curso " + to_string(idCurso) + " No esta registrado";
                }
                
                break;
            case 5:
                lc.desplegar();
                break;
            case 0:
                repetir = true;
                break;
            default:
                cout << "Opcion Incorrecta";
                break;
            }
        }
        else if (opcion == 3) {

            cout << "\n\n************************" << endl;
            cout << "**  Menu de Matriculas**" << endl;
            cout << "************************" << endl;
            cout << "1. Matricular duende" << endl;
            cout << "2. Retirar matricula" << endl;
            cout << "3. Cambiar Prodesor" << endl;
            cout << "4. Ver notas" << endl;
            cout << "5. Asignar nota" << endl;
            cout << "0. Retroceder" << endl;

            cout << "\nIngrese una opcion: ";
            cin >> opcion;
            system("CLS");


            switch (opcion) {
            case 1:

                cout << "\nIngrese el id del duende: ";
                cin >> idDuende;

                cout << "\nIngrese el id del curso: ";
                cin >> idCurso;


                if (ld.existe(idDuende) && lc.existe(idCurso)) {
                    cout << "\nIngrese el nombre del profesor: ";
                    cin >> profesor;
                    lm.matricular(ld.getPunteroLista(), lc.getPunteroLista(), profesor, idCurso, idDuende);
                }
                else {
                    cout << "\nNo se puede realizar la matricula";
                }
                
                break;
            case 2:
                cout << "\nIngrese el id del matricula a retirar: ";
                cin >> idMatricula;

                if (lm.retirar(idMatricula)) {
                    cout << "\nLa matricula " + to_string(idMatricula) + " fue retirada";
                }
                else {
                    cout << "\nLa matricula " + to_string(idMatricula) + " No esta registrada";
                }                
                break;

            case 3:
                cout << "\nIngrese el id de la matricula a modificar: ";
                cin >> idMatricula;

                cout << "\nIngrese el nombre del profesor: ";
                cin >> profesor;

                if (lm.Actualizar(idMatricula, profesor)) {
                    cout << "\nLa matricula " + to_string(idMatricula) + " fue Actualizada";
                }
                else {
                    cout << "\nLa matricula " + to_string(idMatricula) + " No esta registrada";
                }

                break;
            case 4:
                lm.desplegar();
                break;
            case 5:
                cout << "\nIngrese el id de la matricula a modificar: ";
                cin >> idMatricula;

                cout << "\nIngrese la Nota: ";
                cin >> nota;

                if (lm.asignarNota(idMatricula, nota)) {
                    cout << "\nLa nota de la matricula fue actualizada";
                }
                else {
                    cout << "\nLa nota de la matricula no fue actualizada";
                }
            case 0:
                repetir = true;
                break;
            default:
                cout << "Opcion Incorrecta";
                break;
            }

        }
        else if (opcion == 4) {
            repetir = false;
        }
        else {
        cout << "\nOpcion Incorrecta ";
        opcion = 1;
        }
    } while (repetir);

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