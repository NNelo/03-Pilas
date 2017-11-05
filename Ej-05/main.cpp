#include <iostream>
#include "../Pila/Pila.h"

//Se tiene la siguiente expresión infija:
//
//(6+2)∗5−8/4
//
//Realizar un programa en C++ que me calcule la expresión postfija.

using namespace std;

int prioridad(char c) {
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    if (c == '(')       //menor prioridad
        return 0;
    return 10;
}

string postfija(string e) {
    Pila<char> p;
    string r; // r = "";
    for (int i = 0; e[i] != '\0'; ++i) {
        if ((e[i] >= 0 && e[i] <= 9) || (e[i] >= 'a' && e[i] <= 'z') || e[i] >= 'A' && e[i] <= 'Z') {
            r += (e[i]);   // los numeros siempre pasan a la expresion posfija
        } else {
            if (e[i] != ')') {     // Entran operadores. ^ * / + - (
                bool desapilar = true;
                while (desapilar) {
                    //empila si no hay operadores, hay un operador menor o tiene la maxima prioridad
                    if (p.esVacia() || e[i] == '(' || e[i] == '^' || prioridad(e[i]) > prioridad(p.peek())) {
                        p.push(e[i]);
                        desapilar = false;
                    } else {
                        if (prioridad(e[i]) <= prioridad(p.peek())) {
                            r += p.pop();
                            desapilar = true;
                        }
                    }
                }
            } else {       // es un ')'
                while (p.peek() != '(')
                    r += p.pop();
                p.pop();
            }
        }
    }

    while (!p.

            esVacia()

            )
        r += p.

                pop();

    return
            r;
}

int main() {
    std::cout << "Ejercicio 03/05\n" << std::endl;
    cout << "Ingresar expresion infija\n";
//    string s;
//    fflush(stdin);
//    getline(cin, s);
//    fflush(stdin);

    cout << "La expresion posfija es \n" << postfija("a*(b+c-(d/e^f)-g)-h") << endl;

    return 0;
}

//a*(b+c-(d/e^f)-g)-h debe ser abc+def^/-g-*h-