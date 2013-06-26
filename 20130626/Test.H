#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

class A
{
    public:
     A();
};

class B
{
    public:
    explicit B(int param1_=0, float param2_=1.23);
};

class C
{
    public:
    C(int param1_);
};

void doSomethingForClassA(A& objA_);

void doSomethingForClassB( B objB_);

void doSomethingForClassC( C objC_);

#endif // TEST_H_INCLUDED
