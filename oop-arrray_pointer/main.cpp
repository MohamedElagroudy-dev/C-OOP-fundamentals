#include <iostream>

using namespace std;

int main()
{
    int arr[5]= {10,50,40,77,33};
    int *p;
    p=arr;
    for(int i=0; i<5; i++)
    {
        cout<<*(p+i)<<endl;
    }
    cout<<"\n\n\n"<<endl;
    for(int i=0; i<5; i++)
    {
       //
        cout<<*(p++)<<endl;
    }
    cout<<"\n\n"<<*(p+=2)<<endl;
    return 0;
}

