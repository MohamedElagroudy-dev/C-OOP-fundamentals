#include <iostream>
#include <cstring>
using namespace std;
class student{
private:
    char name[10];
    int id;
public:
    student(){
    strcpy_s(name,"no name");
    id=0;
    }
    student(char x[],int y){
    strcpy_s(name,x);
    id=y;
    }
    void print(){
    cout<<"name = "<<name<<"            "<<"id = "<<id<<endl;
    }
};
int main()
{
    student x("mohamed",41645),*p;
    student arr[3]={student("ahmed  ",14644),x};
    p=arr;
    for(int i=0;i<3;i++){
        (p++)->print();
    }
    return 0;
}
