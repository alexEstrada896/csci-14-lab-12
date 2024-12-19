1. (5 pts) Write a complete program in C++ that calculates the sum of numbers.

Your program should prompt the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered. For example, if the user enters 50, the loop will find the sum of 1+2+3+4+...+50.

Your program must also implement input validation (assume the user will at least enter a number). The program should continue outputting error messages when the user enters a negative number until a positive number is entered and accepted.  

Sample output on invalid inputs:

Enter a positive number: -10
Invalid input. Please enter a positive number: -1
Invalid input. Please enter a positive number: 
Sample output on valid input:

The sum of numbers from 1 to 10 is 55.

2. (5 pts) Write a complete program in C++ that calculates how much a person would earn over a period of time if his or her salary is one penny (0.01 dollars) the first day and two pennies the second day, and continues to double each day.

Your program should prompt the user for the number of days. The program should use a loop to display a FORMATTED table showing how much the salary was for each day. The output should be displayed in a dollar amount, not the number of pennies. The salary should keep two digits after the decimal point.

Your program must also implement input validation (assume the user will at least enter a number). The program should continue outputting error messages when the user enters a number less than 1 for the number of days worked until a valid number is entered and accepted. 

Sample output on invalid inputs:

Enter the number of days worked (at least 1): 0
Invalid input. Please enter a number that is at least 1: -1
Invalid input. Please enter a number that is at least 1: 
Sample output on valid input.

Input:

Enter the number of days worked (at least 1): 11 
Output:

Day:          Salary earned:
1             $0.01
2             $0.02
3             $0.04
4             $0.08
5             $0.16
6             $0.32
7             $0.64
8             $1.28
9             $2.56
10            $5.12
11            $10.24
