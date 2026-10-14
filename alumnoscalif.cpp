#include <iostream>
#include <vector> // Necesario para usar vectores

using namespace std;

int main() {
    float promedio, totalcalif = 0;
    float califmax = 0, califmin = 100;
    int estudiantesaprob = 0, estudiantesreprob = 0;
    int cantestudiantes;

    cout << "Cuantos estudiantes vas a ingresar?: ";
    cin >> cantestudiantes;

    if (cantestudiantes <= 0) {
        cout << "Cantidad de estudiantes no valida." << endl;
        return 0;
    }

    // Usamos un vector para guardar las calificaciones de cada estudiante
    vector<float> lista_calif(cantestudiantes);

    for (int i = 0; i < cantestudiantes; i++) {
        cout << "\nEstudiante #" << (i + 1) << "\n";

        do {
            cout << "Ingresa una calificacion valida de 0 a 100: ";
            cin >> lista_calif[i]; // Guardamos directamente en la posición 'i'

            if (lista_calif[i] < 0 || lista_calif[i] > 100) {
                cout << "Error: La calificacion debe estar entre 0 y 100.\n";
            }
        } while (lista_calif[i] < 0 || lista_calif[i] > 100);

        // Evaluamos con la calificación actual
        if (lista_calif[i] > califmax) {
            califmax = lista_calif[i];
        }
        if (lista_calif[i] < califmin) {
            califmin = lista_calif[i];
        }

        if (lista_calif[i] >= 60) {
            estudiantesaprob++;
        } else {
            estudiantesreprob++;
        }

        totalcalif += lista_calif[i];
    }

    promedio = totalcalif / cantestudiantes;

    cout << "\n--- LISTA DE CALIFICACIONES ---\n";
    // Ciclo corregido para imprimir cada una usando el vector
    for (int n = 0; n < cantestudiantes; n++) {
        cout << "Estudiante #" << (n + 1) << " - Calificacion: " << lista_calif[n] << endl;
    }

    cout << "\n--- RESULTADOS FINALES ---\n";
    cout << "Promedio total: " << promedio << endl;
    cout << "Calificacion mas baja fue: " << califmin << endl;
    cout << "Calificacion mas alta fue: " << califmax << endl;
    cout << "Estudiantes aprobados: " << estudiantesaprob << endl;
    cout << "Estudiantes reprobados: " << estudiantesreprob << endl;

    return 0;
}
