#include <iostream>
using namespace std;
struct dis
{
    int feet;
    float inches;
};
dis add_dis(dis x,dis y)
{
    dis result;
    result.feet=x.feet+y.feet;
    result.inches=x.inches+y.inches;
    return result;
}
int main()
{
    dis x,y,z;
    cout<<"enter feet value : ";
    cin>>x.feet>>y.feet;
    cout<<"enter inches value : ";
    cin>>x.inches>>y.inches;
    z=add_dis(x,y);
    cout<<"z.feet = "<<z.feet<<"  "<<"z.inches = "<<z.inches<<endl;
    return 0;
}
