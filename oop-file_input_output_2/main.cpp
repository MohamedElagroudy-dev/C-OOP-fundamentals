#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream mofile("sfile.txt");
    cout<<"Enter the student name\n";
    cout<<"press ctrl+z to exist\n";
    char name[10];
    int id;
    while(cin>>name>>id)
    {
        mofile<<name<<" "<<id<<endl;
    }
    return 0;
}
