#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    cout<<"Ingrese in mumero";
    cin>> i;

    if (i < 0)
    {
        cout<<"El numero es negativo";
    }else cout<<"El numero es positivo";
    return 0;
}