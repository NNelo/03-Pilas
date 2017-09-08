#include <iostream>
#include "gtest/gtest.h"
#include "../Ej-04/main.cpp"

TEST(test_Ej04, test) {
    EXPECT_EQ(true, true);
}

TEST(test_Ej04, filminaOK) {
    std::string text = "7-{[x*((x+y)/[j-3])+y]/(4-2.5)}";
    EXPECT_EQ(controlaParentesis(text), true);
}

TEST(test_Ej04, filminaBAD) {
    EXPECT_EQ(controlaParentesis("7-{[x*((x+y)/[j-3])+y]/(4-2.5)"), false);
    EXPECT_EQ(controlaParentesis("7-[x*((x+y)/[j-3])+y]/(4-2.5)}"), false);
}

TEST(test_Ej04, inventos){
    EXPECT_EQ(controlaParentesis(""), true);
    EXPECT_EQ(controlaParentesis("7-[x*))x+y(/]j-3[(+y[/)4-2.5({"), false);
}