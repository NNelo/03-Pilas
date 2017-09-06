#include "gtest/gtest.h"
#include "../Pila/Pila.h"

Pila<char> *miPila1;

TEST(test_Ej01, test) {
    EXPECT_EQ(true, true);
}

TEST(test_Ej01, hola){
    miPila1 = new Pila<char>();
    miPila1->push('h');
    miPila1->push('o');
    miPila1->push('l');
    miPila1->push('a');
    EXPECT_EQ(miPila1->esVacia(), false);
    EXPECT_EQ(miPila1->pop(), 'a');
    EXPECT_EQ(miPila1->pop(), 'l');
    EXPECT_EQ(miPila1->pop(), 'o');
    EXPECT_EQ(miPila1->pop(), 'h');
    delete miPila1;
}