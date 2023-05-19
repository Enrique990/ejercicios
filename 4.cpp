#include<iostream>

using namespace std;

int i, num, cont = 0;

int main(int argc, char const *argv[])
{
    cout<<"Digite un numero: ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            cont++;
        }
    }

    if (cont > 2)
    {
        cout << "El numero no es primo";
    }else cout << "El numero es primo";
    
    return 0;
}