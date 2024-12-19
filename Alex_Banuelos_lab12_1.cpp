/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int num;
int MIN_VALUE = 1;
int sum = 0;
//asks user to enter number
cout << "Enter a positive number: "<<endl;
cin >>num;

//inputs validation
while (num <1)
{
    cout<<"Invalid input. Please enter a positive number: "<<endl;
    cin>>num;
}



//adds 1 up to the number entered 
while( MIN_VALUE <= num){
   
    sum += MIN_VALUE;  
    MIN_VALUE++;
}


//displays value
 cout <<"The sum of numbers from 1 to "<<num<<" is "<< sum<< endl;

    return 0;
}