//ARRAY OF STRUCTURE VARIABLES
#include<iostream>
using namespace std;
struct student
    {
       int rollnumber;
       char name[20];
       float gpa;
    };
int main(){

    //Now suppose we want to create database of 100 students,it would be impossible to create
    //keep a track of 100 variables of structure student.Hence we use the concept of array of structure
    //variables.
    
    struct student s[30];
    
    int n;
    cout<<"Enter the number of data enteries:"<<"\n";
    cin>>n;
    
    for(int i=0;i<n;i++){
    cout<<"Enter the rollnumber of student:"<<"\n";
    cin>>s[i].rollnumber;
    cout<<"Enter the name of student:"<<"\n";
    cin>>s[i].name;
    cout<<"Enter the gpa obtained by student:"<<"\n";
    cin>>s[i].gpa;
    }
    
    for(int i=0;i<n;i++){
    cout<<s[i].rollnumber<<"\t"<<s[i].name<<"\t"<<s[i].gpa<<"\n";
}
 return 0;
}
