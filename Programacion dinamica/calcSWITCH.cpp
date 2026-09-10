#include <iostream>
#include <string>
#include <iostream>
using namespace std;

// Chavez Anaya Ismael Eliseo
// 4/09/2026
// calculadora

int main() {
    float n1, n2;
    int respuesta = 0;
    int op;

    do {
        // Muestra el menú de opciones
        cout << "\nOpciones" << endl;
        cout << "1: Suma" << endl;
        cout << "2: Resta" << endl;
        cout << "3: Multiplicacion" << endl;
        cout << "4: Division" << endl;
        cout << "5: Salir" << endl;
        cout << "Opcion: ";
        cin >> op;

        switch (op) {
            case 1:
                cout << "\n--- 1: Suma ---" << endl;
                cout << "Ingresa #1: ";
                cin >> n1;
                cout << "Ingresa #2: ";
                cin >> n2;
                cout << "La suma es: " << (n1 + n2) << endl;
                break;

            case 2:
                cout << "\n--- 2: Resta ---" << endl;
                cout << "Ingresa #1: ";
                cin >> n1;
                cout << "Ingresa #2: ";
                cin >> n2;
                cout << "La resta es: " << (n1 - n2) << endl;
                break;

            case 3:
                cout << "\n--- 3: Multiplicacion ---" << endl;
                cout << "Ingresa #1: ";
                cin >> n1;
                cout << "Ingresa #2: ";
                cin >> n2;
                cout << "La multiplicacion es: " << (n1 * n2) << endl;
                break;

            case 4:
                cout << "\n--- 4: Division ---" << endl;
                cout << "Ingresa #1: ";
                cin >> n1;
                cout << "Ingresa #2: ";
                cin >> n2;
                if (n2 != 0) {
                    cout << "La division es: " << (n1 / n2) << endl;
                } else {
                    cout << "No se puede dividir entre cero." << endl;
                }
                break;

            case 5:
                respuesta = 0; // Para salir del ciclo si elige la opción 5
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        // Si la opción no fue salir (5), le preguntamos si desea hacer otra operación
        if (op != 5) {
            cout << "\nQuieres realizar algo mas? " << endl;
            cout << "1 = si   0 = no " << endl;
            cout << "Respuesta: ";
            cin >> respuesta;
        }

    } while (respuesta == 1);

    cout << "\nque le vaya bien :)" << endl;

    return 0;
}

 //Correr el programa .\calcSWITCH.exe
// compilar:  g++ calcSWITCH.cpp -o calcSWITCH.exe
