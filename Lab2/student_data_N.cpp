/*C++ program to input student class, read and print N student's details */
 
#include <iostream>
using namespace std;
 
#define MAX 50
 
class student
{
private:
    	char  name[30];
    	int   rollNo;
    	int   total;
	float perc;
public:
    //member function to get student's details
    void getDetails(void){
    	cout << "Enter name: " ;
    	cin >> name;
    	cout << "Enter roll number: ";
    	cin >> rollNo;
    	cout << "Enter total marks outof 500: ";
    	cin >> total;
    	perc=(float)total/500*100;
    }
        
    //member function to print student's details
    void showDetails(void){
	cout << "Student details:\n";
    	cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << 	",Percentage:" << perc<<"\n";
    }
};
 
int main()
{
    student std[MAX];
    int n,i;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(i=0;i< n;i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].getDetails();
    }
     
    cout << endl;
     
    for(i=0;i< n; i++){
        cout << "Details of student " << (i+1) << ":\n";
        std[i].showDetails();
    }
     
    return 0;
}

