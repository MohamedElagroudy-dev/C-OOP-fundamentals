#include <iostream>
using namespace std;
class triangle
{
    float width,height;
public:
    triangle(float a=0, float b=0)
    {
        width=a;
        height=b;
    }
    void getdata()
    {
        cout<<"enter w : ";
        cin>>width;
        cout<<"enter h : ";
        cin>>height;
    }
    void showdata()
    {
        cout<<"width and height = ( "<<width<<" , "<<height<<" )"<<endl;
    }
    triangle operator + (triangle c2)
    {
        triangle c3;
        c3.width=width+c2.width;
        c3.height=height+c2.height;
        return c3;
    }
};
int main()
{
    triangle c1,c2(3.5,1.5),c3;
    c1.getdata();
    c3=c1+c2;///c1.operator+(c2)
    c3.showdata();
    return 0;
}
