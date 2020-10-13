//WAP to illustrate the concept of default argument 
#include<iostream>
using namespace std;

int sum(int a=0,int b=0,int c=0){
	return a+b+c;
}

int main(){
	int a,b,c;
	cout<<"Enter any three numbers ";
	cin>>a>>b>>c;

	cout<<"Sum of three given number is "<< sum(a,b,c) <<endl;
	cout<<"Sum of first two numbers is "<< sum(a,b)<<endl;
	cout<<"Sum of last two number is "<< sum(b,c)<<endl;
	cout<<"Sum of first and last number is "<< sum(a,c)<<endl;
	return 0;
}
