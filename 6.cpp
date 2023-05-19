#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    cout << "Serie de Fibonacci hasta el numero 1000:\n" << endl;

    while (num1 <= 1000) {
        cout << num1 << " ";

        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    cout << endl;

    return 0;
}