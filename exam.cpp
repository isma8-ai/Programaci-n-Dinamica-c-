#include <iostream>
using namespace std;

int main(){

    int matricula, resultado;
    char tipodeusuario, deseacasillero;
    string descuento10o20 = "";
    int respuesta = -1;
    int numerodemesesapagar;
    int total, hrs, asistencia, hrsTotales = 0, subtotal, totalsindescuento, descuento = 0, tarifamensual, casillero, casillerototal, pagofinal;
    total = 0;
    while (respuesta != 0) {
         total = 0;
         cout << " ==== MENU ==== "<< endl;
         cout << "1: Registrar cobro de membresia "<< endl;
         cout << "2: salir "<< endl;

         cin >> respuesta;

         switch (respuesta) {
              case 1:
                  cout << " ==== Registrar cobro de membresia == "<< endl;
                  cout << "Ingresa la cantidad de meses que deseas pagar"<< endl;
                  cin >> numerodemesesapagar;
                    if (numerodemesesapagar < 1 || numerodemesesapagar > 12){
                          do {
                              cout << "Ingresa una cantidad de meses correcta"<< endl;
                              cin >> numerodemesesapagar;
                          } while (numerodemesesapagar < 1 || numerodemesesapagar > 12);
                    }

                    cout << "Que tipo de usuario eres?"<< endl;
                    cout << "Estudiante = E o e"<< endl;
                    cout << "Docente = D o d"<< endl;
                    cout << "Publico General = G o g"<< endl;
                    cin >> tipodeusuario;
                    while ( tipodeusuario != 'E' && tipodeusuario != 'e' && tipodeusuario != 'd' && tipodeusuario != 'D' && tipodeusuario!= 'G' && tipodeusuario != 'g') {
                          cout << "Ingresa una opcion valida"<< endl;
                          cin >> tipodeusuario;
                    }
                    cout << "==============="<< endl;
                    cout << "Desea contratar casillero?"<< endl;
                    cout << "Si = s o S  NO = n o N"<< endl;
                    cin >> deseacasillero;
                    while ( deseacasillero != 's' && deseacasillero!= 'S' && deseacasillero != 'n' && deseacasillero != 'N') {
                          cout << "Ingresa una opcion valida"<< endl;
                          cin >> deseacasillero;
                    }

                    if (tipodeusuario == 'E' or tipodeusuario == 'e' ){
                        tarifamensual = 150;
                    } else {
                        if (tipodeusuario == 'g' or tipodeusuario == 'G'){
                            tarifamensual = 400;
                        } else {
                            if (tipodeusuario == 'D' or tipodeusuario == 'd'){
                                 tarifamensual = 250;
                            }
                        }
                    }

                    if (deseacasillero == 's' or deseacasillero == 'S'){
                        casillero = 50;
                    } else {
                        if (deseacasillero == 'n' or deseacasillero == 'N'){
                            casillero = 0;
                        }
                    }

                    totalsindescuento = (tarifamensual * numerodemesesapagar);
                    casillerototal = (casillero * numerodemesesapagar);

                    if (numerodemesesapagar >= 6 && numerodemesesapagar < 12 ){
                        descuento = (totalsindescuento * 0.10);
                        descuento10o20 = "(10%)" ;
                    } else {
                        if (numerodemesesapagar == 12 ){
                             descuento = (totalsindescuento * 0.20);
                             descuento10o20 = "(20%)" ;
                        } else {
                             descuento = 0;
                             descuento10o20 = "(0%)";
                        }
                    }

                    pagofinal = (casillerototal + totalsindescuento - descuento);
                    subtotal = (tarifamensual * numerodemesesapagar);

                    for (asistencia = 1; asistencia <= 30; asistencia++){
                         cout << "Cuantas hrs entrenó el usuario?" << endl;
                         cout << "Dia: " << asistencia << endl;
                         cin >> hrs;
                         if (hrs <= 0 ){
                             break;
                         }
                         hrsTotales = hrsTotales + hrs;
                    }

                    cout << "================ TICKET ===============" << endl;
                    cout << "Tipo: " << tipodeusuario << " | Meses: "<< numerodemesesapagar << " | Casillero: " << deseacasillero << endl;
                    cout << "Total de hrs entrenadas: " << hrsTotales << endl;
                    cout << "Subtotal : " << subtotal << endl;
                    cout << "Casillero : " << casillerototal << endl;
                    cout << "Total sin descuento : " << totalsindescuento << endl;
                    cout << "Descuento " << descuento10o20 << " : " << descuento << endl;
                    cout << "Total A Pagar : " << pagofinal << endl;

                break;
             case 2:
                 return 0;
                break;

        }
    }
return 0;
}
