#include <iostream>
using namespace std;
class crec
{
private:
    int wid,hei;
    friend crec duplicate(crec r);
public:
    void set_value(int,int);
    int area()
    {
        return wid*hei;
    }
    crec operator +=(crec x)
{
   wid=x.wid*2;
   hei=x.hei*2;
    return *this;
}
};
void crec::set_value(int a,int b)
{
    wid=a;
    hei=b;
}

/*
crec duplicate(crec r)
{
    crec t;
    t.wid=r.wid*2;
    t.hei=r.hei*2;
    return t;
}
*/
int main()
{
    crec x,y;
    x.set_value(2,3);
    cout<<"Before duplicate = "<<x.area()<<endl;
    y+=x;
    //y=duplicate(x);
    cout<<"After duplicate = "<<y.area();
    return 0;
}
