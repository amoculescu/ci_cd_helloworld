//
// Created by andre on 07/01/2025.
//

#include "FirstClass.h"

FirstClass::FirstClass() {
    privateDouble = 12.323;
}

void FirstClass::untestedMethod() {
    privateDouble += 1.231;
}

double FirstClass::testedMethod() {
    return privateDouble -= 1.231;;
}

double FirstClass::testedMethod2() {
    return privateDouble += 1.231;
}

double FirstClass::testedMethod3() {
    return privateDouble *= 1.231;
}

double FirstClass::testedMethod4() {
    return privateDouble /= 1.231;
}
