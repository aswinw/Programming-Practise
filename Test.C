#include "Test.H"

using namespace std;

template<typename TemplateParameter>
std::size_t Test<TemplateParameter>::justAFunction(int number_)
{
    cout<< "This is just a test function printing " << number_ <<endl;
    _aDataMember = number_;
    return number_;
}


int main()
{
    Test<int> *justAnObject = new Test<int>();

    justAnObject->justAFunction(44);

    return 0;
}
