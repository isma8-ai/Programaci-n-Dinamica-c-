#include <iostream>
#include <string>
using namespace std;
//Chavez Anaya Ismael Eliseo
//4/09/2026
//calculadora de indice de masa corporal
int main() {
    float edad, peso, altura, imc ; //declarar variables
    int op;

    string Nombre;

    while (op != 0)
    {
        //pones las opciones
        cout << "Buenas, Ingresa tus datos" << endl;
        cout << "Nombre: ";
        cin >> Nombre;
        cout << "Edad: ";
        cin >> edad;
        cout << "Peso:";
        cin >> peso;
        cout << "Altura:";
        cin >> altura;
        cout << "" <<imc<< endl;
        cout << "============================" <<imc<< endl;

        imc = peso/(altura*altura);
        cout << "su ims es: " <<imc<< endl;

        if (imc <= 18.5){
            cout << "su peso esta muy bajo " << endl;
        } else {
            if (imc >= 18.5 and imc <= 24.9) {
                 cout << "su peso esta normal muy bien " << endl;
            } else{
                if (imc >= 25.0 and imc <= 29.9 ) {
                    cout << " Tienes sobrepeso " << endl;
                } else {
                     if (imc >= 30) {
                         cout << " Tienes obesidad clasificada en grado 1,2 o 3 " << endl;
                     }
                }
            }
        }


         cout << "Quiere calcular otro imc? Si = 1 No = 0" << endl;
         cin >> op;
    }
    return 0;
}
