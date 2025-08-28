#include <iostream>
using namespace std;
class A
{
    int i;
protected:
    int j;
public:
    int k;
};

class В :public A  //inherited public member
{
    int x;
public:
    int y;
    int get_i()  //cannot access private member declared in class 'A'
    {
        return i;
    }
    int get_j()
    {
        return j;
    }
};
int main()
{
    B op;
    op.i=5;//cannot access private member declared in class A
    op.j=5;//cannot access protected member declared in class A
    op.k=5;
    op.x=5;//cannot access private member declared in class B
    op.y=9;
}





