#include <iostream>

#include <string>

using namespace std;

int contarVocales(const string& cadena) {
    int contador = 0;
    for (char c : cadena) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                contador++;
                break;
            default:
                break;
        }
    }
    return contador;
}

int main() {
    string cadena;
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);

    int numVocales = contarVocales(cadena);
    cout << "El numero de vocales en la cadena es: " << numVocales << endl;

    return 0;
}