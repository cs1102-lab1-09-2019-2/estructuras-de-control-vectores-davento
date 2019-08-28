/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo

 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo

 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 101

 Continuar? y

 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.

 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  5.- Modulo\n";
}

int main() {
    int opt, a, b, res;
    char cont;
    bool repeat=true;
    while(repeat==true){
    mostrarMenu();
    do{
    cout<<"Ingresa una opci�n: ";
    cin>>opt;
    }while(opt<1 || opt>5);
    cout<<"\nIngresa los dos n�meros: ";
    cin>>a>>b;
    switch(opt){
        case 1:
            res=a+b;
            break;
        case 2:
            res=a-b;
            break;
        case 3:
            res=a*b;
            break;
        case 4:
            res=a/b;
            break;
        case 5:
            res=a%b;
            break;
        default:
            cout<<"Operador inv�lido";
    }
    cout<<"\nResultado: "<<res<<"\n\n�Continuar?";
    cin>>cont;
    cout<<"\n";
    if (cont!='y'){
        repeat=false;
        break;
    }
    }
    return 0;
}