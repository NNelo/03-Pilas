#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 03/01\n" << std::endl;

    char p[50];
    Pila<char> pila;

    cout << "Ingrese una palabra" << endl;
    gets(p);

    int i = 0;

    while (p[i] != '\0') {
        pila.push(p[i]);
        i++;
    }

    while (!pila.esVacia()) {
        cout << pila.pop();
    }

    return 0;
}