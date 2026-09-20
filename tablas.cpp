#include <iostream>
using namespace std;

int main(){

    int i, n,j,k,l,ñ, resultado;
    int contador;
    int respuesta = -1;

    while (respuesta != 0) {
         cout << "Selecciona una opcion "<< endl;
         cout << "0: salir "<< endl;
         cout << "1: Mostrar las tablas de multiplicar "<< endl;
         cout << "2: Mostrar un cuadrado de 5*5 "<< endl;
         cout << "3: Mostrar un triangulo de 8*5 "<< endl;

         cin >> respuesta;

         switch (respuesta) {
             case 0:
                return 0;
                break;
             case 1:
                 for (contador = 1; contador <= 10; contador++) {
                     for (n = 1; n <= 10; n++){
                         resultado = contador * n;
                         cout << contador << " x " << n << " = "<< resultado << endl;
                     }
                     cout << "==============================" << endl;
                 }
                 break;
             case 2:
                 for (n = 1 ; n <= 5; n++){
                     cout << "*" ;
                      for (i = 1 ; i <= 4; i++){
                          cout << "*";
                      }
                     cout << "" << endl;
                 }
                 break;
             case 3:
                 for (n = 1; n <= 8; n++){
                      cout << "*";
                 }
                 cout << "" << endl;
                 for (j = 1; j <= 6; j++){
                     if ( j <= 1 ){
                          cout << " ";
                     } else{
                         if (j >= 7 )
                             cout << "  ";
                     }
                      cout << "*";

                 }
                 cout << "" << endl;
                 for (k = 1; k <= 4; k++){
                     if (k < 2){
                         cout << "  ";
                     } else {
                         if ( k >= 6)
                             cout << " ";
                     }
                      cout << "*";
                 }
                 cout << "" << endl;
                 for (l = 1; l <= 2; l++){
                     if (l == 1){
                         cout << "   ";

                     }
                      cout << "*";
                 }
                 cout << "" << endl;
                 for (ñ = 1; ñ <= 1; ñ++){
                     if (ñ < 3 ){
                         cout << "    ";
                     }
                      cout << "*";
                 }
                 cout << "" << endl;
         }
    }
    return 0;
}
