#include "Test.H"
#include <iostream>

using namespace std;

int main()
{
    A obj1;
    B obj2;
    B obj3(28);
    C obj4(44);

    doSomethingForClassA(obj1);

    doSomethingForClassB(obj2);
    doSomethingForClassB(obj3);
    doSomethingForClassB(B(44));
    doSomethingForClassB(28); //will not work because the constructor is defined as explicit

    doSomethingForClassC(obj4);
    doSomethingForClassC(C(32));
    doSomethingForClassC(44); // will work because of implicit type conversion

    return 0;
}
