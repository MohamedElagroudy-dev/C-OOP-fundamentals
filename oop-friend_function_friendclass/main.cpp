#include <iostream>

using namespace std;
class myclass{
    int a,b;
public:
    myclass(int i,int t){
    a=i;
    b=t;
    }
   friend int sum(myclass ob);
};

int sum(myclass ob){
    return ob.a+ob.b;
}
int main()
{
    myclass o(5,6);
    cout<<sum(o);
    return 0;
}
