//WAP to input data of n students and display it using the concept of structure
#include<stdio.h>
#define MAX 50
struct student{
	int roll;
	char name[50], address[50];
	float marks;
};

int main()
{
	struct student s[50];
	int n,i;
	printf("Enter the number of students");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the details of %dst student\n",i+1);
		printf("Name: ");
		scanf("%s",s[i].name);
		printf("Roll no: ");
		scanf("%d",&s[i].roll);
		printf("Address : ");
		scanf("%s",s[i].address);
		printf("Marks : ");
		scanf("%f",&s[i].marks);
	}

	printf("\n-----------Student Details-------------\n");
	printf("Name\tRollno\tAddress\tMarks\n");
	for(i=0;i<n;i++){
		printf("%s\t%d\t%s\t%f\n",s[i].name,s[i].roll,s[i].address,s[i].marks);
	}
	return 0;
}
