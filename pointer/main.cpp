#include <iostream>

using namespace std;
void Swap (int* ptr1,int* ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main()
{
    char msg[]="hello,world";
    char* ptr;
    ptr=msg;
    *ptr='m';
    ptr++;
    *ptr='a';
    ptr+=2;
    *ptr='k';
    for(int i=0;i<1;i++)
    {
        cout<<msg;
    }
    int a=5,b=10;
    Swap(&a,&b);
    cout<<"\na = "<<a<<"        b = "<<b<<endl;
    return 0;
}
