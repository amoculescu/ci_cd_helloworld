#include <iostream>
#include "CustomMath.h"
#include "FirstClass.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "2 Squared is: " << square(2) << std::endl;
    FirstClass dut = FirstClass();
    dut.untestedMethod();
    std::cout << dut.testedMethod() << " Squared is: " << square(dut.testedMethod()) << std::endl;
    return 0;
}
