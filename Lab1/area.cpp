#include<iostream>
using namespace std;
#define PI 3.14

float area(float a, float b){
	return (a*b);
}

float area(float x){
	return (PI*x*x);
}

int main(){
	float l,b,r;
	cout<<"Enter the length and width of a rectangle"<<endl;
	cin>>l>>b;

	cout<<"The area of rectangle is "<<area(l,b)<<endl;

	cout<<"Enter the radius of the circle"<<endl;
	cin>>r;

	cout<<"The area of cirlce is "<<area(r)<<endl;
	return 0;
}

