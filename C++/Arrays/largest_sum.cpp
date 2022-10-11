// Find the largest sum of contigious sub array
#include<iostream>
using namespace std;
void sumArray(int arr[], int n){
  int sum = 0;
  int mx_sum = 0;//max_sum
  for(int i=0;i<n; i++){
    sum += arr[i];
    if(mx_sum < sum){
      mx_sum = sum;
    }
    if(sum < arr[i]){
      sum = arr[i];
    }
  }
  cout<<"Largest num is : "<<mx_sum<<endl;
}
int main(){
  int arr [] = {1,2,3,-1};
  int n = sizeof(arr)/sizeof(arr[0]);
  sumArray(arr,n);
  return 0;
}