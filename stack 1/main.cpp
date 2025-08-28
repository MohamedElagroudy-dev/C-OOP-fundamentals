#include <iostream>
using namespace std;
const int Max=100;
template<class t>
class stack
{
    t top;
    t item[Max];
public:
    stack():top(-1) {}
    void puch(t element)
    {
        if(top>=Max-1)
            cout<<"The stack is full\n";
        top++;
        item[top]=element;
    }
    bool isempty()
    {
        return top < 0 ;
    }
    void pop()
    {
        if(isempty())
            cout<<"stack is empty\n";
        else
            top--;
    }
    void pop(t& element)
    {
        if(isempty())
            cout<<"stack is empty\n";
        else
        {
            element=item[top];
            top--;
        }
    }
    void get_top(t& stacktop)
    {
        if(isempty())
            cout<<"stack is empty\n";
        else
        {
            stacktop=item[top];
            cout<<stacktop<<endl;
        }
    }
    void print()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<item[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    stack<int>s;
    s.puch(5);
    s.puch(10);
    s.puch(15);
    s.puch(20);
    s.print();
    int t=0;
    s.get_top(t);
    cout<<t<<endl;
    s.pop();
    s.puch(7);
    s.print();
    s.pop(t);
    cout<<t<<endl;
    s.print();

    return 0;
}
