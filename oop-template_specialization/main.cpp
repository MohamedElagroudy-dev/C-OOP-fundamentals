#include <iostream>
using namespace std;
template<class T>
class A_char{

public:
    A_char(T x)
    {
        cout<<" is not character "<<endl;
    }
};
template<>///template specialisation
class A_char<char>{

public:
    A_char(char x)
    {
        cout<<" is a character "<<endl;
    }
};
int main()
{
    A_char<int>op1(7);
    A_char<double>op2(7.8888);
    A_char<char>op3('a');
    return 0;
}
