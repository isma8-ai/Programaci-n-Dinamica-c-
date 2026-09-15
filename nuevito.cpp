#include <iostream>
#include <cstdlib> // Necesario para usar system("cls")

using namespace std;

///calculadora isma-Profemirsa-programacionDinamica

int main()
{
    int valor1, valor2, n, val1, val2, val3;
    int total;
    char letra;
    int respuesta = 0;
    int op = 0;
    char continuar; // Variable para preguntar si desea continuar

    while (op != 5)
    {
        cout << "\nOpciones" << endl;
        cout << "1: Pedir un numero y que diga si es par o impar " << endl;
        cout << "2: Pedir un numero del 1 al 7 y diga el dia de la semana correspondiente" << endl;
        cout << "3: Pedir un numero del 1 al 12 y diga el nombre del mes correspondiente" << endl;
        cout << "4: Pedir un numero y diga si es positivo o negativo" << endl;
        cout << "5: Pedir un numero y diga si es mayor de 100" << endl;
        cout << "6: Pedir una letra y detecte si es una vocal" << endl;
        cout << "7: Pedir tres numeros y indicar si el tercero es igual a la suma del primero y el segundo" << endl;
        cout << "8: Pedir tres numeros y diga si la multiplicacion de los dos primeros es igual al tercero" << endl;
        cout << "9: si no elijes una de las opciones anteriores el programa debe indicar error que cometio el usuario" << endl;
        cin >> op;

        switch (op) {
            case 1:
                cout << "\n---- 1 ---" << endl;
                cout << "ingresa #1: ";
                cin >> valor1;
                if (valor1 % 2 == 0) {
                     cout << "El numero es par ";
                } else {
                    cout << "No es par." << endl;
                }
                break;

            case 2:
                 cout << "\n---- 2 Decir los dias de la semana ---" << endl;
                cout << "ingresa un numero ";
                cin >> valor1;
                if (valor1 == 1) {
                     cout << "El dia seleccionado es lunes ";
                } else {
                    if (valor1 == 2)
                    cout << "El dia seleccionado fue martes" << endl;
                    else {
                        if (valor1 == 3)
                            cout << "El dia seleccionado fue miercoles" << endl;
                        else{
                            if (valor1 == 4)
                                cout << "El dia seleccionado fue jueves" << endl;
                            else{
                                if (valor1 == 5){
                                   cout << "El dia seleccionado fue viernes" << endl;
                                }
                                else{
                                    if (valor1 == 6)
                                        cout << "El dia seleccionado fue sabado" << endl;
                                    else{
                                        if (valor1 == 7)
                                            cout << "El dia seleccionado fue Domingo" << endl;
                                        else{
                                            if (valor1 < 1 or valor1 > 7 )
                                                cout << "El numero seleccionado no es un numero de la semana" << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;

            case 3:
                 cout << "\n---- 3 Decir los Meses ---" << endl;
                 cin >> n;
                 switch (n) {
                    case 1:
                         cout << "El mes seleccionado fue ENERO " << endl;
                         break;
                    case 2:
                         cout << "El mes seleccionado fue FEBRERO " << endl;
                         break;
                    case 3:
                        cout << "El mes seleccionado fue MARZO " << endl;
                        break;
                    case 4:
                        cout << "El mes seleccionado fue ABRIL " << endl;
                        break;
                    case 5:
                        cout << "El mes seleccionado fue MAYO " << endl;
                        break;
                    case 6:
                        cout << "El mes seleccionado fue JULIO " << endl;
                        break;
                    case 7:
                        cout << "El mes seleccionado fue JUNIO " << endl;
                        break;
                    case 8:
                        cout << "El mes seleccionado fue AGOSTO " << endl;
                        break;
                    case 9:
                        cout << "El mes seleccionado fue SEPTIEMBRE " << endl;
                        break;
                    case 10:
                        cout << "El mes seleccionado fue OCTUBRE " << endl;
                        break;
                    case 11:
                        cout << "El mes seleccionado fue NOVIEMBRE " << endl;
                        break;
                    case 12:
                        cout << "El mes seleccionado fue DICIEMBRE " << endl;
                        break;
                    default:
                        cout << "Opcion no valida." << endl;
                        break;
                 }
                break;

            case 4:
                 cout << "\n---- 4 Numeros positivo o negativo ---" << endl;
                cout << "ingresa un numero: ";
                cin >> n;
                if (n <= 0)
                    cout << "El numero ingresado es un numero negativo" << endl;
                else{
                    if (n >= 1)
                    cout << "El numero ingresado es un numero positivo" << endl;
                }
               break;

            case 5:
                cout << "Ingresa un numero" << endl;
                cin >> n;
                if (n > 100)
                    cout << "El valor ingresado es mayor que 100" << endl;
                else {
                    if (n == 100)
                        cout << "El valor ingresado es igual que 100" << endl;
                    else {
                        if (n < 100)
                            cout << "El valor ingresado es menor que 100" << endl;
                    }
                }
                break;

            case 6:
                cout << "Ingresa una letra minuscula" << endl;
                cin >> letra;
                if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u')
                    cout << "la letra ingresada es una vocal" << endl;
                else {
                    cout << "La letra ingresada no es una vocal" << endl;
                }
                break;

            case 7:
                cout << "Ingresa el primer valor positivo" << endl;
                cin >> val1;
                cout << "Ingresa el segundo valor positivo" << endl;
                cin >> val2;
                cout << "Ingresa el tercer valor positivo" << endl;
                cin >> val3;
                total = val1 + val2;
                if (total == val3){
                    cout << "El valor ingresado es igual a la suma de los dos primeros valores" << endl;
                } else {
                    if (total != val3)
                        cout << "El valor ingresado no es igual a la suma de los dos primeros valores" << endl;
                    }
                break;

            case 8:
                cout << "Ingresa el primer valor" << endl;
                cin >> val1;
                cout << "Ingresa el segundo valor" << endl;
                cin >> val2;
                cout << "Ingresa el tercer valor" << endl;
                cin >> val3;
                total = val1 * val2;
                if (val3 == total){
                     cout << "El valor3 es igual a la multiplicacion de los primeros dos valores" << endl;
                } else {
                    if (total != val3)
                        cout << "El valor3 es distinto a la multiplicacion de los primeros dos valores" << endl;
                }
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        // --- AGREGADO: Pausa, pregunta para continuar y limpieza de pantalla ---
        cout << "\nPresiona Enter para continuar...";
        cin.ignore(); // Limpia el buffer de entrada
        cin.get();    // Espera a que el usuario presione una tecla

        cout << "¿Desea continuar con el programa? (s/n): ";
        cin >> continuar;
        if (continuar == 'n' || continuar == 'N') {
            break; // Sale del ciclo while y termina el programa
        }

        system("cls"); // Limpia la pantalla para la siguiente ejecución
    }
    return 0;
}
