// ProyectoFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Curso.h"
#include "Duende.h"
#include "Matricula.h"
#include "Lista_Curso.h"
#include "Lista_Duende.h"

using namespace std;

int main()
{

    Lista_Curso lc = Lista_Curso();
    Lista_Duende ld = Lista_Duende();
    Lista_Curso lm = Lista_Curso();

    Duende duende = Duende();
    Curso curso = Curso();

    int opcion;
    bool repetir = true;

    //DATOS DEL DUENDE

    int idDuende;
    string nombre;
    int edad;
    bool condicion_becado = false;

    //DATOS DEL CURSO
    int idCurso;
    int creditos;
    int horas;


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

                duende.setNombre(nombre), duende.setEdad(edad), duende.setestadoBecado(condicion_becado);
                ld.agregar(duende.getPDuende());
                break;

            case 2:
                cout << "\nIngrese el id del duende a modificar: ";
                cin >> idDuende;

                cout << "\nIngrese el nombre del duende: ";
                cin >> nombre;

                cout << "\nIngrese la edad del duende: ";
                cin >> edad;

                cout << "\nIngrese la condicion de becado del duende (1-Verdadero, 2-Falso): ";
                cin >> condicion_becado;

                ld.Actualizar(idDuende, nombre, edad, condicion_becado);
                break;

            case 3:
                cout << "\nIngrese el id del duende: ";
                cin >> idDuende;

                cout << ld.getDuende(idDuende) << endl;
                break;
            case 4:
                cout << "\nIngrese el id del duende a eliminar: ";
                cin >> idDuende;

                ld.eliminar(idDuende);;
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

                curso.setNombre(nombre), curso.setCreditos(creditos), curso.setHoras(horas);
                lc.agregar(curso.getPCurso());
                break;

            case 2:
                cout << "\nIngrese el id del curso a modificar: ";
                cin >> idCurso;

                cout << "\nIngrese el nombre del curso: ";
                cin >> nombre;

                cout << "\nIngrese la cantidad de creditos del curso: ";
                cin >> creditos;

                cout << "\nIngrese la cantidad de horas del curso: ";
                cin >> horas;

                lc.Actualizar(idCurso, nombre, creditos, horas);
                break;

            case 3:
                cout << "\nIngrese el id del curso: ";
                cin >> idCurso;

                cout << lc.getCurso(idCurso) << endl;
                break;
            case 4:
                cout << "\nIngrese el id del curso a eliminar: ";
                cin >> idCurso;

                lc.eliminar(idCurso);
                break;
            case 5:
                lc.desplegar();
                break;
            case 0:
                repetir = true;
                break;
            }
        }
        else if (opcion == 3) {

            cout << "\n\n************************" << endl;
            cout << "**  Menu de Matriculas**" << endl;
            cout << "************************" << endl;
            cout << "1. Agregar una nueva matricula" << endl;
            cout << "2. Retirar matricula" << endl;
            cout << "3. Asignar nota a curso" << endl;
            cout << "4. Ver notas" << endl;
            cout << "0. Retroceder" << endl;

            cout << "\nIngrese una opcion: ";
            cin >> opcion;
            system("CLS");

            switch (opcion) {

                switch (opcion) {
                case 1:

                    cout << "\nIngrese el nombre del profesor asociado al curso: ";
                    cin >> nombre;

                    cout << "\nIngrese el id del curso: ";
                    cin >> creditos;

                    cout << "\nIngrese el id del duende: ";
                    cin >> horas;

                    lc.agregar(curso.getPCurso());
                    break;
                case 2:
                    cout << "\nIngrese el id del matricula a retirar: ";
                    cin >> idCurso;

                    cout << lc.getCurso(idCurso) << endl;
                    break;


                case 3:
                    cout << "\nIngrese el id del curso a modificar: ";
                    cin >> idCurso;

                    cout << "\nIngrese el nombre del curso: ";
                    cin >> nombre;

                    cout << "\nIngrese la cantidad de creditos del curso: ";
                    cin >> creditos;

                    cout << "\nIngrese la cantidad de horas del curso: ";
                    cin >> horas;

                    lc.Actualizar(idCurso, nombre, creditos, horas);
                    break;
                case 4:
                    lc.desplegar();
                    break;
                case 0:
                    repetir = true;
                    break;
                }
            }
        } else if (opcion == 4) {
            repetir = false;
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
