#include <iostream>

using namespace std;
class mother
{

public:
    mother()
    {
        cout<<"mother : empty constructor"<<endl;
    }
    mother(int a)
    {
        cout<<"mother : parameterize constructor"<<a<<endl;
    }
};

class daughter:public mother
{

public:
    daughter()
    {
        cout<<"daughter : empty constructor"<<endl;
    }
    daughter(int a)
    {
        cout<<"daughter : parameterize constructor"<<endl;
    }
};
class son:public mother
{

public:
    son()
    {
        cout<<"son : empty constructor"<<endl;
    }
    son(int a,int b):mother(a)
    {
        cout<<"son : parameterize constructor"<<a<<" "<<b<<endl;
    }
};
int main()
{
    daughter sara(5);
    cout<<"\n";
    son mo(10,6);
    return 0;
}
