#include <iostream>

using namespace std;

int main()
{
    int size,i,index;
    cout<<"Enter the Array size"<<endl;
    cin>>size;
    int myarr[size];
    cout<<"Please Enter the values"<<endl;
    for(int i=0;i<size;i++){
        cin>>myarr[i];
    }
    cout<<"Which value you get from array Enter Index"<<endl;
    cin>>index;
    if(index < size-1)
    {
        cout<<myarr[index];
    }
    else{
        cout<<"Your index is out of range"<<endl;
    }
    

    return 0;
}
