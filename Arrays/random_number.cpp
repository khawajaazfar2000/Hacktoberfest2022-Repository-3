#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Random_num{
	public:
	int num;
	
	int Get_Random_10(){
			 	cout<<"randon numbers between 1-10"<<endl;

	 return num;
	}
	int Get_Random_30(){
		cout<<"random numbers between 1-30"<<endl;
		return num;	}
	

	void display(){
		cout<<" max number between both random generators"<<endl;
		
	}
};
int main(){
	srand(time(0));
	int r[10];
	Random_num n;
	for(int i = 0; i<5; i++){
	 	r[i] =n.Get_Random_10();
	 	cout<<r[i];
	 }
	 for(int i=0;i<5;i++){
			
			r[i] = n.Get_Random_30();
			cout<<r[i];		}
	

	return 0;
	}
