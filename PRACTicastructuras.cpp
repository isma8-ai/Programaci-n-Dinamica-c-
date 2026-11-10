
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

const int ALUMNOS = 5;
const int PARCIALES = 3;
const double APROBATORIA = 70;

struct Alumno {
    int matricula;
    string nombre;
    int edad;
    vector<double> calificaciones;
    double promedio;
};

int main() {

    vector<Alumno> grupo;

    for (int i = 0; i < ALUMNOS; i++) {

        Alumno a;

        cout << "\n--- Alumno " << i + 1 << " ---\n";

        cout << "Matricula: ";
        cin >> a.matricula;

        cout << "Nombre: ";
        cin >> a.nombre;

        cout << "Edad: ";
        cin >> a.edad;

        for (int j = 0; j < PARCIALES; j++) {

            double cal;

            cout << "Calificacion del parcial " << j + 1 << ": ";
            cin >> cal;

            a.calificaciones.push_back(cal);
        }

        grupo.push_back(a);
    }

    for (int i = 0; i < ALUMNOS; i++) {

        double suma = 0;

        for (double cal : grupo[i].calificaciones) {
            suma += cal;
        }

        grupo[i].promedio = suma / PARCIALES;
    }

    // Mostrar resultados con dos decimales
    cout << fixed << setprecision(2);

    // 3. Mostrar tabla de alumnos
    cout << "\n\n========== LISTA DEL GRUPO ==========\n\n";

    cout << setw(12) << "Matricula"
         << setw(12) << "Nombre"
         << setw(8) << "Edad"
         << setw(10) << "P1"
         << setw(10) << "P2"
         << setw(10) << "P3"
         << setw(12) << "Promedio" << endl;

    for (int i = 0; i < ALUMNOS; i++) {

        cout << setw(12) << grupo[i].matricula
             << setw(12) << grupo[i].nombre
             << setw(8) << grupo[i].edad;

        for (double cal : grupo[i].calificaciones) {
            cout << setw(10) << cal;
        }

        cout << setw(12) << grupo[i].promedio << endl;
    }


    double sumaGeneral = 0;

    for (Alumno a : grupo) {
        sumaGeneral += a.promedio;
    }

    double promedioGeneral = sumaGeneral / ALUMNOS;

    cout << "\nPromedio general del grupo: "
         << promedioGeneral << endl;


    int mejor = 0;
    int peor = 0;

    for (int i = 1; i < ALUMNOS; i++) {

        if (grupo[i].promedio > grupo[mejor].promedio) {
            mejor = i;
        }

        if (grupo[i].promedio < grupo[peor].promedio) {
            peor = i;
        }
    }

    cout << "\nMejor alumno: "
         << grupo[mejor].nombre
         << " (" << grupo[mejor].promedio << ")" << endl;

    cout << "Peor alumno: "
         << grupo[peor].nombre
         << " (" << grupo[peor].promedio << ")" << endl;


    double promediosParciales[PARCIALES];
    int parcialBajo = 0;

    cout << "\n PROMEDIO POR PARCIAL \n";

    for (int j = 0; j < PARCIALES; j++) {

        double suma = 0;

        for (int i = 0; i < ALUMNOS; i++) {
            suma += grupo[i].calificaciones[j];
        }

        promediosParciales[j] = suma / ALUMNOS;

        cout << "Parcial " << j + 1 << ": "
             << promediosParciales[j] << endl;

        if (promediosParciales[j] <
            promediosParciales[parcialBajo]) {

            parcialBajo = j;
        }
    }

    cout << "Parcial con el promedio mas bajo: "
         << parcialBajo + 1 << endl;

    // Contar alumnos
    int aprobados = 0;
    int reprobados = 0;
    bool hubo = false;

    cout << "\nALUMNOS REPROBADOS \n";

    for (Alumno a : grupo) {

        if (a.promedio >= APROBATORIA) {

            aprobados++;

        }
        else {

            reprobados++;
            hubo = true;

            cout << a.nombre << ": "
                 << a.promedio << endl;
        }
    }

    cout << "\nAprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;

    if (hubo == false) {
        cout << "Todos los alumnos aprobaron" << endl;
    }

    int buscar;
    bool encontrado = false;

    cout << "\nBUSCAR \n";

    cout << "Ingresa la matricula que quieres busvar";
    cin >> buscar;

    for (Alumno a : grupo) {

        if (a.matricula == buscar) {

            encontrado = true;

            cout << "\nAlumno encontrado\n";

            cout << "Nombre: " << a.nombre << endl;
            cout << "Matricula: " << a.matricula << endl;
            cout << "Edad: " << a.edad << endl;

            cout << "Calificaciones: ";

            for (double cal : a.calificaciones) {
                cout << cal << " ";
            }

            cout << "\nPromedio: "
                 << a.promedio << endl;

            break;
        }
    }

    if (encontrado == false) {
        cout << "\nalumno no encontrado" << endl;
    }

    return 0;
}
