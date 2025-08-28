#include <iostream>
using namespace std;
class ctriangle;
class cpolygon////////////11111111111111
{
protected:
    int width,height;
public:
    void set_value(int a,int b)
    {
        width=a;
        height=b;
    }
};

class crectangle: public cpolygon //here this is inheritance/////////////222222222222222
{
public:
    int area()
    {
        return (width*height);
    }
};
class ctriangle: public cpolygon////////////////33333333333333333
{
public:
    int area ()
    {
        return (width * height / 2);
    }
    void print()
    {
     cout<<"hello";
    }
};
int main()
{
    crectangle rect;
    ctriangle trgl;
    rect.set_value(4,5);
    trgl.set_value(4,5);
    cout<<rect.area()<<endl;
    cout<<trgl.area()<<endl;
    return 0;
}
