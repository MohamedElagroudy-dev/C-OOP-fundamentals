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
    virtual int area()=0; //abstract class -> cannot define function only pointer in this class
    //virtual->scam compiler to able pointer-overwride
    void print_area()
    {
        cout<< this->area() <<endl;
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
    cpolygon *p1, *p2 ; //only father can do it
    p1=&rect;
    p2=&tri;
    p1->set_values(5,4);
    p2->set_values(5,12);
    p1->print_area();
    p2->print_area();
    cpolygon *p[2]= {&rect,&tri};
    for(int i=0 ; i<2 ; i++)
    {
        p[i]->area();
        p[i]->print_area();
    }
    return 0;
}
