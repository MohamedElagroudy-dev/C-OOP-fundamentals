#include <iostream>

using namespace std;

int main( ){
const int SIZE = 10000000;
int i;
int A[SIZE];

for(i=0; i<SIZE; i++)
A[i] = i;
int *B;
B = new int[SIZE];
for(i=0; i<SIZE; i++)
    *(B+i) = A[i];
for(i=0; i<SIZE; i++)
    cout << A[i] << " " << *(B+i) << endl;
return 0;
}
