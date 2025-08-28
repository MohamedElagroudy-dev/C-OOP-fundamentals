#include <iostream>
using namespace std;
class binari
{
    int x,y;

public:
    binari(int a=0,int b=0)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
    binari operator + (binari c2)
    {
        binari c3;
        c3.x=x+c2.x;
        c3.y=y+c2.y;
        return c3;
    }
    binari operator+(int c2)
    {
        binari c3;
        c3.x=x+c2;
        c3.y=y+c2;
        return c3;
    }
    friend binari operator+(int n,binari c1);

};

binari operator+(int n,binari c1)
{
    binari c3;
    c3.x=c1.x+n;
    c3.y=c1.y+n;
    return c3;
}
int main()
{
    binari c1(1,1),c2(1,1),c3;
    c3=c1+c2;
    c3.print();
    c3=c1+10;
    c3.print();
    c3=10+c1;//opertator+(c1,10)
    c3.print();
    return 0;
}
