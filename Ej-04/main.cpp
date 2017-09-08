#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

//Escriba un programa que ingresada una función matemática, informe si la
//cantidad de (, [, { que abren están balanceados con los que cierran.

bool esCompanero(char t, char c) {
    if (t == '(' && c == ')')
        return true;
    if (c == '(' && t == ')')
        return true;
    if (t == '[' && c == ']')
        return true;
    if (c == '[' && t == ']')
        return true;
    if (t == '{' && c == '}')
        return true;
    if (c == '{' && t == '}')
        return true;
    return false;
}

bool controlaParentesis(string txt) {
    Pila<char> pila;
    bool est = true;
    char c;

    for (int i = 0; i < txt.length() && est; ++i) {
        if (txt[i] == '(' || txt[i] == '[' || txt[i] == '{')
            pila.push(txt[i]);
        if (txt[i] == ')' || txt[i] == ']' || txt[i] == '}')
            if (pila.esVacia()) {
                cout << "La ecuación está mal en " << i + 1 << endl;
                est = false;
            } else {
                c = pila.pop();
                if (!esCompanero(c, txt[i])) {
                    cout << "La ecuación está mal en " << i + 1 << endl;
                    est = false;
                }
            }
    }
    if (pila.esVacia() && est) {
        cout << "Su ecuación es correcta\n";
        return true;
    }
    cout << "La ecuación está mal en " << txt.length() << endl;
    return false;
}

namespace Ej04 {
    int main() {
        std::cout << "Ejercicio 03/04\n" << std::endl;
        Pila<char> pila;
        string txt;

        cout << "Ingrese la función matemática\n";
        fflush(stdin);
        getline(cin, txt);
        fflush(stdin);

        controlaParentesis(txt);

        return 0;
    }
};