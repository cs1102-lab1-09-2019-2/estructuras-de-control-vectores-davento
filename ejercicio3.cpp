#include <iostream>
#include <vector>
using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector<int> v;

    int num;

    while(true){

    	cin>>num;

    	if (num==-1){

    		break;

    	}

    	v.push_back(num);

    }

    return v;
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}

vector<int> inSort(vector<int> &lista){
int h, temp;
for (int i=1;i<lista.size();i++){
    h=i;
    while(h >=0 && lista[h] < lista[h-1]){
        temp=lista[h];
        lista[h]=lista[h-1];
        lista[h-1] = temp;
        h=h-1;
    }
}
return lista;
}

int mediana(vector<int> &lista) {
    int size=lista.size(), med;
    if (size%2==0)
        med=(lista[size/2]+lista[size/2 - 1])/2;
    else
        med=lista[(size-1)/2];
    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2

    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */
    return med;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    inSort(leer_usuario);
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}