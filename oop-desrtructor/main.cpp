#include <iostream>
using namespace std;
class trangle{
private:
    float base;
    float hight;
public:
    trangle(int a,int h)//parameterise con
    {
        cout<<"parameter constructor\n";
        base =a;
        hight =h;
    }
    ~trangle(){
        cout<<base<<" "<<hight<<" deleted "<<endl;
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
{    trangle x(5,8),x2(2,2);
    x.print();
    x2.print();
    cout<<"hhhhhhhhhhhhhhhhhhhhh\n";
    return 0;
}
