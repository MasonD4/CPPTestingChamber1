#include "TestClass.h"
#include <iostream>
using namespace std;

TestClass::TestClass() {
    ax = 458;
}
TestClass::TestClass(int xa) {
    ax = xa;
}
int TestClass::getAX() {
    return ax;
}
void TestClass::setAX(int xa) {
    ax = xa;
}