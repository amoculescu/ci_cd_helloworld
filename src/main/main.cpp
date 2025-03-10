#include <iostream>
#include "CustomMath.h"
#include "FirstClass.h"
#include "SecondClass.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "2 Squared is: " << square(2) << std::endl;
    FirstClass dut = FirstClass();
    dut.untestedMethod();
    std::cout << dut.testedMethod() << " Squared is: " << square(dut.testedMethod()) << std::endl;

    SecondClass dut2 = SecondClass();
    string testString = "with a long message appended.";
    std::cout << dut2.testedMethod(testString) << std::endl;
    return 0;
}
