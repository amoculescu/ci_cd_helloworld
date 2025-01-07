//
// Created by andre on 07/01/2025.
//

#ifndef CI_CD_HELLO_WORLD_SECONDCLASS_H
#define CI_CD_HELLO_WORLD_SECONDCLASS_H
#include <string>

using namespace std;
class SecondClass {
private:
    string base = "Base String";

public:
    string testedMethod(string& append);
};


#endif //CI_CD_HELLO_WORLD_SECONDCLASS_H
