#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    long f = 1;

    cout<<"Escribe un numero: ";
    cin>>n;

    for (long i = 1; i <= n; i++)
    {
        f = f * i;
    }
    
    cout<<"La respuesta es: "<<f<<endl;
    return 0;
}