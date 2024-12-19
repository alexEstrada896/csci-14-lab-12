/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{

	int days,
	    startingDay = 1;
	double salery;
	salery = 0.01;

//asks user number of days worked
	cout<<"Enter number of days worked(at least 1): "<<endl;
	cin>>days;
//inputs validation
	while (days  < startingDay) {
		cout<< "Invalid input. Please enter a number that is at least 1: "<<endl;
		cin>>days;
	}

//outputs day and salery
	cout<<"Day:      "<<"Salary: "<<endl;

//doubles salery everyday
	while (startingDay <= days) {

		cout<<setw(20)<<left<<startingDay<<fixed<<setprecision(2)<<salery<<endl;
		startingDay++;
		salery *= 2;
	}
	return 0;
}