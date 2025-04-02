#ifndef TESTCLASS_H
#define TESTCLASS_H

using namespace std;

class TestClass {
private:
    int ax;
public:
    TestClass();
    TestClass(int);
    int getAX();
    void setAX(int);
};

#endif