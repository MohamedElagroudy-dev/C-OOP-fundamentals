#include <iostream>

using namespace std;

int main()
{
    try{
    int a[10]={2,3,4,5,6,7,8,9,87,55};
    int index;
    cout<<"enter index : ";
    cin>>index;
    if(index < 0)
        throw "error";
    if(index > 10)
        throw index;
    for(int i=0;i<=index;i++)
        cout<<a[i]<<" ";
    }
    catch (int n)
    {
        cout<<"exception : ";
        cout<<"index "<<n<<" is out of range"<<endl;
    }
    catch(char* str)
    {
        cout<<"exception : "<<str<<endl;
    }
    return 0;
}
