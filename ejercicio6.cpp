/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30

 */

#include <iostream>
using namespace std;

int findMax(int a,int b,int c){
    int max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
return max;
}

int main(){
    int a, b, c;
    cout<<"Ingrese tres números separados por un espacio entre cada uno: ";
    cin>>a>>b>>c;
    cout<<"\nEl mayor valor es: "<<findMax(a,b,c)<<"\n";
return 0;
}