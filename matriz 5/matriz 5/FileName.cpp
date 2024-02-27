#include <iostream>
#include <locale.h>

int main() {
    using namespace std;
    setlocale(LC_ALL, "Portuguese");
    int numero, a;

    do {
        cout << "Digite um número menor ou igual a 100: \n";
        cin >> numero;
    } while (numero >= 100);
    a = numero - 1;
    do {
        if (a % 2 != 0) {
            cout << a << endl;
        }
        a--;
    } while (a  >= 1);
}