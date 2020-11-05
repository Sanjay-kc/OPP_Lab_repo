//WAP in CPP to overload unary ++ for postfix and prefix increment operation on complex numbers using friend function.
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


	friend complex operator ++(complex &); //prefix

	friend complex operator ++(complex &, int); //postfix

	void showdata()
	{
		cout<<real<<"+i"<<imag<<endl;
	}
};

complex operator ++(complex &c)
{
	complex temp;
	temp.real=++c.real;
	temp.imag=++c.imag;
	return temp;
}

complex operator ++(complex &c,int)
{
	complex temp;
	temp.real=c.real++;
	temp.imag=c.imag++;
	return temp;
}

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
