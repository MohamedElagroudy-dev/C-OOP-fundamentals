#include <iostream>
using namespace std;

class cpolygon
{
protected:
    int width,height;
public:
    void set_values(int a, int b)
    {
        width=a;
        height=b;
    }
    virtual int area()///scam compiler to able pointer  //over written
    {
        return 0;
    }
};

class crectangle:public cpolygon
{
public:
    int area()
    {
        return (width*height);
    }
};

class ctriangle:public cpolygon
{
public:
    int area()
    {
        return (width*height/2);
    }
};
int main()
{
    crectangle rect;
    ctriangle tri;
    cpolygon poly;
    cpolygon *p1, *p2, *p3 ;  ///only father can do it
    p1=&rect;
    p2=&tri;
    p3=&poly;
    p1->set_values(5,4);
    p2->set_values(5,12);
    p3->set_values(5,8);
    cout<< p1->area() <<endl;
    cout<< p2->area() <<endl;
    cout<< p3->area() <<endl;
    return 0;
}
