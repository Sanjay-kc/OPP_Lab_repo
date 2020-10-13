//WAP in C to add two complex numbers using the concept of structure
#include<stdio.h>

struct complex
{
	float real,img;
};

int main()
{
	struct complex a,b,c;

	printf("Enter real and imaginary number for first expression\n");
	scanf("%f%f",&a.real,&a.img);
	printf("Enter real and imaginary number for second experssion\n");
	scanf("%f%f",&b.real,&b.img);
	
	c.real=a.real+b.real;
	c.img=a.img+b.img;

	printf("\nThe sum of complex numbers is %f + %fi",c.real,c.img);
	return 0;
}
