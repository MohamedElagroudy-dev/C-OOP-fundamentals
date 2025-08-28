#include <iostream>
using namespace std;
class cexception
{
    int arr[100];
public:
    cexception()
    {
        for(int i=0 ; i<100; i++)
            arr[i]=i*10;
    }
    int get_element(int x)
    {
        if (x>=100)
            throw xbig();
        else if (x<0)
            throw xsmall();
        else
            return arr[x];
    }
class xbig
{
public:
    xbig() {}
    void big()
    {
        cout<<"Big\n";
    }
};


class xsmall
    {
public:
    xsmall() {}
    void small()
        {
            cout<<"Small\n";
        }
};
};

int main()
{
    int i=0;
    cexception a;
    try
    {
        cout<<"choise the element : ";
        cin>>i;
        cout<<"the element : "<<a.get_element(i)<<endl;
    }
    catch(cexception::xsmall s)
    {
        s.small();
    }
    catch(cexception::xbig b)
    {
        b.big();
    }
    return 0;
}
