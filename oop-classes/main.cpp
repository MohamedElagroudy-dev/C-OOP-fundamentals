#include <iostream>
#include <cstring>\\strcpy
using namespace std;
class car{
private:
    char name[15];
    char colour[10];
    int speed;
    int model;
public:
    void setname(char n[]){
    strcpy_s(name, n);
    }
    void setcolour(char n[]){
    strcpy_s(colour, n);
    }
    void setspeed(int m){
    speed =m;
    }
    void setmodel(int m){
    model=m;
    }
    char* getname(){
    return name;
    }
    char* getcolour(){
    return colour;
    }
    int getspeed(){
    return speed;
    }
    int getmodel(){
    return model;
    }
    void print(){
    cout<<"name = "<<name<<"\n"<<
        "colour = "<<colour<<"\n"<<
        "speed = "<<speed<<"\n"<<
        "model = "<<model<<endl;
    }
};
int main()
{
    car x;
    x.setname("BMW 340i");
    x.setcolour("blue");
    x.setspeed(300);
    x.setmodel(2023);
    x.print();
    return 0;
}
