#include <iostream>
using namespace std;
class stud
{

public:
    void adreess()
    {
        cout<<this;
    }
};

int main()
{
    stud a,b,c;
    cout<<"adreess of a : ";
    a.adreess();
    cout<<"\n"<<&a;
    cout<<"\n";
    cout<<"adreess of b : ";
    b.adreess();
    cout<<"\n";
    cout<<"adreess of c : ";
    c.adreess();
    cout<<"\n";
    return 0;
}
