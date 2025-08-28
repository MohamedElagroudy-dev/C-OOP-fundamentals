#include <iostream>
#include <string.h>
using namespace std;
class name
{
    char n[20];
protected:
    void set_name(char N[])
    {
        strcpy_s(n,N);
    }
    void print_name()
    {
        cout<<"name = "<<n<<endl;
    }
};
class ID
{
    int id;
protected:
    void set_ID(int i)
    {
        id=i;
    }
    void print_ID()
    {
        cout<<"ID = "<<id<<endl;
    }
};
class student:public name, public ID
{
public:
    student(char name[],int id)
    {
        set_name(name);
        set_ID(id);
    }
    void print()
    {
        print_name();
        print_ID();
    }
};
int main()
{
    student op("mohamed",1445);
    op.print();
    return 0;
}
