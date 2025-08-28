#include <iostream>
using namespace std;
class trangle{
private:
    float base;
    float hight;
public:
    trangle()//empty con
    {
        cout<<"empty constructors\n";
    }
    trangle(int a,int h)//parameter con
    {
        cout<<"parameter constructor\n";
        base =a;
        hight =h;
    }
    void setbase(float m){
        base =m;
    }
    void sethight(float m){
        hight =m;
    }

    void print(){
        cout<<"base = "<<base<<endl;
        cout<<"hight = "<<hight<<endl;
    cout<<"area of trangle ="<<(.5)*(base * hight)<<endl;
    }
};
int main()
{    trangle x(5,8),x2;
    x.print();
    x2.setbase(10);
    x2.sethight(10);
    x2.print();
    return 0;
}
