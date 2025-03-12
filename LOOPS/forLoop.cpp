/*
Write a Program to calculate the sum of natural numbers.
--> Return the sum of the first n natural numbers.
--> Natural numbers are positive integers starting from 1. The sum of the first n natural numbers can be calculated using the formula: sum = n * (n + 1) / 2.
--> For example, if n = 10, the return value should be 55.
*/

#include<iostream>
using namespace std;
int main(){
    //Declaring  variable n and sum
    int n,sum;
    sum = 0;
    //This will take input from user
    cout<<"Enter a positve integer: ";
    //This will store the input in variable n
    cin>>n;
    //This loop will run from 1 to n
    for(int i=1;i<=n;i++){
        //This will calculate the value of sum
        sum = n*(n+1)/2;
    }
    //This will print the sum of first n natural numbers
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;
}