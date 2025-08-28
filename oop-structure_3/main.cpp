#include <iostream>
#include <cstring>
using namespace std;
struct exam
{
    float firs;
    float second;
    float last;
};
class subject
{
private:
    char name[10];
    exam Exam;
public:
    subject(char n[],float x,float y,float z)
    {
        strcpy_s(name,n);
        Exam= {x,y,z};
    }
    void print()
    {
        cout<<"name = "<<name<<"\n"
            <<"mid = "<<Exam.firs<<"\n"
            <<"practise = "<<Exam.second<<"\n"
            <<"final = "<<Exam.last<<endl;
    }
};
int main()
{
    subject s("math",12,13,10);
    s.print();
    return 0;
}
