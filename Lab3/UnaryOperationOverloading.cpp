//WAP in CPP to overload unary ++ for postfix and prefix increment operation on complex numbers using member function.
#include<iostream>
using namespace std;
class complex
{
	float real;
	float imag;
public:
	complex()
	{
		real=0;
		imag=0;
	}
	complex(float r,float i)
	{
		real=r;
		imag=i;
	}


	complex operator ++() //prefix
	{
		complex temp;
		temp.real=++real;
		temp.imag=++imag;
		return temp;
	}
	complex operator ++(int) //postfix
	{
		complex temp;
		temp.real=real++;
		temp.imag=imag++;
		return temp;
	}
	void showdata()
	{
		cout<<real<<"+i"<<imag<<endl;
	}
};



int main()
{	
	float a,b,m,n;
	cout<<"Enter the real and imaginary value of 1st complex number"<<endl;
	cin>>a>>b;
	cout<<"Enter the real and imaginary value of 2nd complex number"<<endl;
	cin>>m>>n;
	complex c1(a,b),c2(m,n),c3;
	cout<<"Initual values of c1, c2, c3 is "<<endl;
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c2=++c1;
	c3=c2++;
	cout<<"\nFinal values of c1, c2, c3 is "<<endl;	
	c1.showdata();
	c2.showdata();
	c3.showdata();
	return 0;
}
