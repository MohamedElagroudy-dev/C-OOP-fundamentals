#include <iostream>
#include <cstring>
using namespace std;
class student{
private:
    static int count;
    char name[20];
    int first,second,finall,total,id;
public:
    student(){
    strcpy_s(name,"no name");
    id=0;
    first=second=finall=0;
    count++;
    cout<<"number of student = "<<count<<endl;
    }
    static void p(){
        cout<<"Hello, world"<<endl;
    }
};
int student::count=0;
int main()
{
    student s1,s2;
    student st[3];
    student::p();
    return 0;
}
