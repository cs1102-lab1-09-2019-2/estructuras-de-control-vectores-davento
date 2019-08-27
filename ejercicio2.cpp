#include <iostream>
#include <vector>
using namespace std;

int moda(vector<int> &lista);
vector<int> leerConsola();
vector<int> inSort(vector<int> &lista);

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

int moda(vector<int> &lista)
{

    int size=lista.size(), number = lista[0], mode = number, count = 1, countMode = 1;

    for (int i=1; i<size; i++)

{

    if (lista[i] == number)
 
    {

        count++;

    }

    else

    {

        if (count > countMode)
 
        {

            countMode = count;

            mode = number;

        }

        count = 1;

        number = lista[i];

    }

}

return mode;

}

int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    inSort(leer_usuario);
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}