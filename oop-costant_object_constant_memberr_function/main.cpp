#include <iostream>
using namespace std;
class time{
private:
    int h,m,s;
public:
    void print()const //constant function
    {
        cout<<"the time = "<<h<<" : "<<m<<s<<endl;
    }
    time(int q, int w, int e){
    h=q;
    m=w;
    s=e;
    }
};
int main()
{
    time noon(10,0,0);
    noon.print();
    return 0;
}
