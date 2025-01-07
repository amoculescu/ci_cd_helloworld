//
// Created by andre on 07/01/2025.
//
#include <iostream>
#include "SecondClass.h"

string SecondClass::testedMethod(string& append)
{
    if (append.length() > 12)
    {
        base.append(" ");
        base.append(append);
    }else {
        for (int i = 0; i < 3; i++) {
            base.append(" ");
            base.append(append);
        }
    }
    return base;
}
