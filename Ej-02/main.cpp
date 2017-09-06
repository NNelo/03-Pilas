#include <iostream>
#include "../Pila/Pila.h"

template<class T>
bool sonIguales(Pila<T> pil1, Pila<T> pil2) {
    if (pil1.esVacia() && pil2.esVacia())
        return true;
    
    if (pil1.esVacia() != pil2.esVacia())
        return false;

    if (pil1.pop() == pil2.esVacia())
        return sonIguales(pil1, pil2);

    return false;
}

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;
    return 0;
}