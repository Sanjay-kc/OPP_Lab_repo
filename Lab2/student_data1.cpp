/*C++ program to create student class, read and print student's details */
 
#include <iostream>
using namespace std;
 
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
	cout << "Student detail:\n";
    	cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc<<"\n";
    }
};
 
int main()
{
    student std;
    cout << "Enter details of student "<< ":\n";
    std.getDetails();
    cout << endl;
    cout << "Details of student " << ":\n";
    std.showDetails();
   
     
    return 0;
}

