#include <iostream>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    int grado;
};

int main (){
    Estudiante est1;
    cout << "ingresa el nombre de el alumnno : ";
    cin >> est1.nombre;
    cout << "ingresa la edad de el alumnno : ";
    cin >> est1.edad;
    cout << "ingresa el grado de el alumnno : ";
    cin >> est1.grado;

    cout << "Nombre: " << est1.nombre << "\n";
    cout << "Edad: " << est1.edad << "\n";
    cout << "Grado: " << est1.grado << "\n";


    return 0;
}
