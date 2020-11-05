//WAP to calculate the products of two 3*3 matrices using operator overloading
#include<iostream>
using namespace std;

class matrix{
	int a[3][3];
public:
	void getData(){
		cout<<"Enter 9 elements of the matrices";
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>a[i][j];
			}
		}
	}

	void showData(){
		cout<<"\n";
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
	}

	matrix operator *(matrix m)
	{
		matrix temp;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				temp.a[i][j]=0;
				for(int k=0;k<3;k++)
				{
					temp.a[i][j] += a[i][k] * m.a[k][j];
				}
			}
		}
		return temp;
	}
};

int main()
{
	matrix m,n,ans;
	cout<<"1st matrix: "<<endl;
	m.getData();
	cout<<"1st matix :"<<endl;
	m.showData();
	cout<<"2nd matrix; "<<endl;
	n.getData();
	cout<<"2nd matrix :"<<endl;
	n.showData();
	ans = m * n;
	cout<<"Product of the given matrices is "<<endl;
	ans.showData();
	return 0;
}
