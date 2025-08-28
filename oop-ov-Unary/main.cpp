#include <iostream>
using namespace std;
class Unary
{
private:
    int x,y;
public:
    Unary(int a=0,int b=0)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"x : "<<x<<"  "<<"y : "<<y<<endl;
    }
    Unary operator ++ ()
    {
        x++;
        y++;
        return Unary(x,y);
    }
    Unary operator++(int)
    {
        Unary t;
        t=*this;
        x++;
        y++;
        return t;

    }
    Unary operator-()//~
    {
        x=-x;
        y=-y;
        return *this;
    }
    bool operator !()
    {
        return (x==0&&y==0);
    }
    Unary operator += (Unary b2)
    {
        x+=b2.x;
        y=b2.y;
        return *this;
    }
};
int main()
{
    Unary v(10,20),h(1,2),x(1,1),b1(1,2),b2(3,3),k;
    v++;
    k=v++;
    -h;
    cout<<"K :  ";
    k.print();
    cout<<"V :  ";
    v.print();
    cout<<"H :  ";
    h.print();
    if(!x)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    b1+=b2;//b1.operator(b2);
    b1.print();
    return 0;
}
