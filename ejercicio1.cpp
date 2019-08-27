#include <vector>

#include <iostream>

#include <iomanip>

using namespace std;


float promedio(vector<int> v);

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
 
}


float promedio(vector<int> v) {

    float prom;

    int len, sum=0;

    len=(int)v.size();

    for (int i=0; i<len; i++) {
 
   sum+=(int)v[i];

}

    prom=sum/len;

    return prom;

}


int main() {

    cout<<"Calcular el promedio de los ingresados:\n\n";

    vector<int> leer_usuario = leerConsola();

    float promedio_elemento = promedio(leer_usuario);

    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";

}