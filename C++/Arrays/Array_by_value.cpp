#include<iostream>
using namespace std;

int show(int m){
    return m*m;
}
int main(){
int x;
cout << "Enter a number ";
  cin >> x;
int a = show(x);
cout<<a<<endl;
return 0;
}
