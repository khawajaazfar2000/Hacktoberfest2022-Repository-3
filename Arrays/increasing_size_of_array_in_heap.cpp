// Increasing the size of array through heap

#include<iostream>
using namespace std;
int main(){
    int *p,*q;
    p = new int [5];
    p[0]= 4;
    p[1] = 3;
    p[2] = 2;
    p[3] = 1;
    p[4] = 0;

    q = new int [10];
    for (int i = 0; i<5; i++){
        q[i] =p[i];
    }

    p = q;
    q = NULL;
    for (int i = 0; i<5; i++){
        cout<<p[i];
       

    }
     return 0;
}