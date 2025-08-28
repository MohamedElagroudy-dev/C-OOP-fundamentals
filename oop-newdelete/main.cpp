#include <iostream>
using namespace std;

class  crec{
private:
    int *width ,*height;
public:
    crec(int w,int h){
    width=new int;
    height=new int;
    *width=w;
    *height=h;
    }
    ~crec(){
    delete width;
    delete height;
    cout<<"hello";
    }
    int area(){
    return *width * *height;
    }
};
int main()
{
    crec x(3,4);
 cout<<x.area()<<endl;
}
