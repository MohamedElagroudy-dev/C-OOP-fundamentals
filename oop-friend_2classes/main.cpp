#include <iostream>
using namespace std;
class tri;
class crec
{
private:
    int w,h;
public:
    void set_crec(int a,int b)
    {
        w=a;
        h=b;
    }
    friend int sum(crec q,tri e);

};
class tri
{
private:
    int W,H;
public:
    void set_tri(int a,int b)
    {
        W=a;
        H=b;
    }
    friend int sum(crec q,tri e);

};
int sum(crec q,tri e)
    {
        return q.w+e.W;
    }
int main()
{
    crec x;
    x.set_crec(10,5);
    tri y;
    y.set_tri(6,9);
    cout<<"\n"<<sum(x,y)<<"\n";
    return 0;
}
