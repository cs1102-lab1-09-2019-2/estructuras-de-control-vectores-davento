/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>

using std::cout;


int main() {

	int a=7, b=2;

    for (int i=1; i<a; i++){

        for (int j=1;j<i+b;j++)

            cout<<j;

        for (int j=i+b-1;j<a;j++)

            cout<<'*';

    cout<<"\n";

    }

    return 0;

}