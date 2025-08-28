#include <iostream>
using namespace std;
class trangle{
private:
    float base;
    float hight;
public:
    trangle(){
        cout<<"first constructors\n";
    }
    void setbase(float m){
        base =m;
    }
    void sethight(float m){
        hight =m;
    }

    void print(){
    cout<<"area of trangle ="<<(.5)*(base * hight)<<endl;
    }
};
int main()
{
    trangle x;
    x.print();
    //x.setbase(5);
    //x.sethight(8);
    //x.print();
    return 0;
}
