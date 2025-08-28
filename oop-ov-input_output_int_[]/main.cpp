#include <iostream>

using namespace std;
class arr
{
    int a[3];
public:
    arr()
    {
        for(int i=0;i<3;i++)
            a[i]=i+2;
    }
    int operator[](int in)
    {
        return a[in];
    }
};
class Distance
{
    int foot;
    int inches;
public:
    Distance()
    {
        foot=0;
        inches=0;
    }
    Distance(int f,int i)
    {
        foot=f;
        inches=i;
    }
    friend istream& operator>>(istream&ip,Distance&d);
    friend ostream& operator<<(ostream&output,Distance&d);
};
istream& operator>>(istream&ip,Distance&d)
{
    ip>>d.foot>>d.inches;
    return ip;
}
ostream& operator<<(ostream&output,Distance&d)
{
    output<<"feet: "<<d.foot<<"\ninches:"<<d.inches;
    return output;
}

int main()
{
    Distance D1(11,10),D2(5,11),D3;
    cin>>D3;
    cout<<D3;
    arr ob;
    cout<<ob[2];
    return 0;
}
