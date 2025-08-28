#include <iostream>
#include <string>
using namespace std;
string da[7]= {"sat","sun","mon","tue","wed","thur","fri"};
enum days {sat=1,sun,mon,tue,wed,thur,fri};
class week
{
private:
    days d[7];
public:
    void setdays(days w[])
    {
        for(int i=0; i<7; i++)
            d[i]=w[i];
    }
    void p()
    {
        for(int i=0; i<7; i++)
            cout<<"the number of the day "<<da[i]<<" : "<<d[i]<<endl;
    }
};
int main()
{
    days d[7]= {sat,sun,mon,tue,wed,thur,fri};
    week g;
    g.setdays(d);
    g.p();
    return 0;
}
