//WAP to illustrate the concept of constructor and deconstructor
#include<iostream>
using namespace std;
class complex{
	float real;
	float imag;
public:
	complex(){
		real=0;
		imag=0;
	}
	
	complex(float a, float b){
		real=a;
		imag=b;
	}
	complex(complex &c){
		real=c.real;
		imag=c.imag;
	}
	
	void showdata()
	{
		cout<<"Sum = "<<real<<" + i"<<imag<<endl;
	}
	
	~complex()
	{
		cout<<"DESTROYED"<<endl;
	}
};

int main ()
{
	complex c1;
	complex c2(2.4,5.4);
	complex c3(c2);
	c1.showdata();
	c2.showdata();
	c3.showdata();
	return 0;
}
