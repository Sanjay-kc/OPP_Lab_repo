//Wap to illustrate the concept of inline function
#include<iostream>
using namespace std;

inline float cube(float x){
	return (x*x*x);
}

int main(){
	float a,b;
	cout<<"Enter any number ";
	cin>>a;
	b = cube(a);
	cout<<"the cube of "<<a<<" is "<<b<<endl;
	return 0;
}
