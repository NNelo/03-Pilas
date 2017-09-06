#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 03/03\n" << std::endl;

    Pila<int> *p1 = new Pila<int>();

    for (int i = 0; i < 5; ++i)
        p1->push(i);

    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < 5; ++i)
            cout << p1->peek() << endl;
        cout << "Popeando " << p1->pop() << endl;
    }

    return 0;
}