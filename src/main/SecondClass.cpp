//
// Created by andre on 07/01/2025.
//
#include <iostream>
#include "SecondClass.h"

string SecondClass::testedMethod(const string& append)
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

bool SecondClass::testedMethod2(const string& test)
{
    if (base.empty())
    {
        return false;
    }
    if (test.length() > base.length())
    {
        return false;
    }
    return base.contains(test);
}

string SecondClass::testedMethod3()
{
    base.clear();
    return base;
}