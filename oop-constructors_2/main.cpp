#include <iostream>
#include <cstring>
using namespace std;
class student{
private:
    char name[10];
    int id;
public:
    student(){
        strcpy_s(name," no name");
        id=0;
    }
        student(char n[],int i){
        strcpy_s(name,n);
        id=i;
    }
    student(char n[]){//overloaded constructor
        strcpy_s(name,n);
        cout<<"hello\n";
    }
    void print(){
        cout<<"name = "<<name<<"\n"
        <<"id = "<<id<<endl;
    }

};
int main()
{
 student x2("mohamed"),x3("ahmed");
 x2.print();
 x3.print();
    return 0;
}
