//WAP to find the sum of two complex numbers using the the concept of the overloading binary + operator using member function.
#include<iostream>
using namespace std;

class Complex{
	float real,img;
public:
	Complex(){
		real=0;
		img=0;
	}

	Complex(float r, float i){
		real=r;
		img=i;
	}

	Complex operator +(Complex c)
	{
		Complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}

	void showData()
	{
		cout<<"The sum is "<<real<<" + "<<img<<"i"<<endl;
	}
};

int main()
{
	float a,b,m,n;
	cout<<"Enter the real and imaginary value of 1st complex number"<<endl;
	cin>>a>>b;
	cout<<"Enter the real and imaginary value of 2nd complex number"<<endl;
	cin>>m>>n;
	Complex c1(a,b),c2(m,n),c3;
	c3=c1+c2;
	c3.showData();
	return 0;
}
