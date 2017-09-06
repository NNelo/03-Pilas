#include "gtest/gtest.h"
#include "../Pila/Pila.h"
#include "../Ej-02/main.cpp"

TEST(test_Ej02, test) {
    EXPECT_EQ(true, true);
}

Pila<int> *p1, *p2;

TEST(test_Ej02, iguales) {
    p1 = new Pila<int>;
    p2 = new Pila<int>;
    for (int i = 0; i < 5; i++) {
        p1->push(i);
        p2->push(i);
    }
    EXPECT_EQ(sonIguales(p1, p2), true);
}
