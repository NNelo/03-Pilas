#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

template<class T>
bool sonIguales(Pila<T> *pil1, Pila<T> *pil2) {
    if (pil1->esVacia() && pil2->esVacia())
        return true;

    if (pil1->esVacia() != pil2->esVacia())
        return false;

    if (pil1->pop() == pil2->pop())
        return sonIguales(pil1, pil2);

    return false;
}

namespace Ej02 {

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;
    cout << "Comparar Pilas\n";

    Pila<int> *p1 = new Pila<int>(), *p2 = new Pila<int>();

    for (int i = 0; i < 5; ++i) {
        p1->push(i);
        p2->push(i);
    }

    if (sonIguales(p1, p2))
        cout << "Son iguales\n";
    else
        cout << "No lo son\n";

    cout << "vacias? " << sonIguales(p1, p2) << endl;

    for (int j = 0; j < 5; ++j) {
        p1->push(5 - j);
        p2->push(j);
    }

    if (sonIguales(p1, p2))
        cout << "Son iguales\n";
    else
        cout << "No lo son\n";


    return 0;
}

};