#include <iostream>
using namespace std;
class student{
    int id;
public:
    void set_id(int id)
    {
        this->id=id;
    }
    void print()
    {
        cout<<"ID : "<<id<<endl;
    }

};
int main()
{
    student i;
    i.set_id(16164495);
    i.print();
    return 0;
}
