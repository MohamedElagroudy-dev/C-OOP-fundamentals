#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream mofile("test.txt");
    ///mofile.open("Test for exam");
    mofile<<"moooooooooooooooooooo\n";
    mofile.close();
    ofstream adelfile("test2.txt");
    if(adelfile.is_open())
        cout<<"it's open\n";
    else
        cout<<"it's close\n";
    adelfile.close();
    return 0;

}
