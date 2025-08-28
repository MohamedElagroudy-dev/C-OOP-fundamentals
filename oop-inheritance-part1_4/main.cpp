#include <iostream>
using namespace std;
class base{
    int i;
public:
    int j,k;
    void seti(int x)
    {i=x;}
    int geti()
    {
        return i;
    }
};
class derived : private base{

public:
    //base::j;  //make public again
    base::seti;   //make seti() public again
    base::geti;   //make geti() public again
    //base::i  //illegal, you cannot elevate access
    int setj(int x)
    {
        return j;
    }

};
int main()
{
    derived op;
    //op.i=10;
    //op.j=20;
    //op.k=30
    op.setj(10);
    op.seti(10);
    op.seti(5);
    return 0;
}
