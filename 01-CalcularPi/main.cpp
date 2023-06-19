#include <iostream>
#include <cmath> //me perimite usar Floor para el comparador
#include <iomanip>

using namespace std;


double Leibniz(double pi) {
    
    int contador = 0;
    int InterSigno = 1;//intercala valor nagativo y positivo
    int calculo = 1;// variable para el denominador
    double comparador = 0.0;

    while(comparador != 3.141592){ //repite hasta que los numeros coincidadn
        pi += InterSigno *(1.0 /calculo);
        InterSigno *=  -1;
        calculo +=2;
        contador++;
        comparador = floor(pi * 4.0 * 1e6) / 1e6; //toma el valor de la serie actual hasta la sexto decimal
    }

    pi *= 4.0;
    return pi;
}

int main() {
    double pi = 0.0;
    pi = Leibniz(pi);

   cout << "Resultado " << setprecision(6) << fixed << pi << endl;

    return 0;
}
