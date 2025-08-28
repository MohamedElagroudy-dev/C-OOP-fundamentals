#include <iostream>
using namespace std;
class trangle{
private:
    float base;
    float hight;
public:
    trangle():base(0),hight(0)
    {
        cout<<"base = "<<base<<" "<<"hight = "<<hight<<endl;
    }
    trangle(int a,int h)//parameterise con
    {
        cout<<"parameter constructor\n";
        base =a;
        hight =h;
        trangle oo;
    }
    ~trangle();
    void setbase(float m){
        base =m;
    }
    void sethight(float m){
        hight =m;
    }

    void print();
};
trangle::~trangle(){
        cout<<base<<" "<<hight<<" deleted "<<endl;
    }
void trangle::print(){
        cout<<"base = "<<base<<endl;
        cout<<"hight = "<<hight<<endl;
    cout<<"area of trangle ="<<(.5)*(base * hight)<<endl;
    }
int main()
{    trangle x(5,8),x2(2,2),xe;
    x.print();
    x2.print();
    return 0;
}
