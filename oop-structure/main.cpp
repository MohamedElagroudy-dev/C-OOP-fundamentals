/*
����� ��� ������ �����
���� ��� ���� �� ���� ���� ��� ��� ������ �� ���� �������
�� ���� ������ ������ �� ������
����� �� ���� ���� �����//if(g.speed < m.speed)
 */

#include <iostream>
#include <string>
using namespace std;

struct car
{
    string name;
    string colour;
    int speed;
    int model;

}g;

int main(){

//car g={"car","red",250,2019};���������� �� �� ���
g={"car","red",250,2019};
cout<<g.speed<<endl;

    return 0;
}
