#include <iostream>
using namespace std;
class relational
{
    int x,y,z;
public:
    relational()
    {
        x=y=z=0;
    }
    relational(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    bool operator == (relational eq)//==can be changed to <= >= !=
    {
        if(x==eq.x&&y==eq.y&&z==eq.z)
            return true;
        else
            return false;
        //return (x==eq.x&&y==eq.y&&z==eq.z);
    }
};
int main()
{
    relational a(10,10,10),b(10,10,10);
    if(a==b)//if(a.operator(b)
        cout<<"the two objects are equal\n";
    else
        cout<<"the two objects are not equal\n";

    return 0;
}
