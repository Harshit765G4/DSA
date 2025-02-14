/*
Write a Program to calculate the sum of natural numbers.
--> Return the sum of the first n natural numbers.
--> Natural numbers are positive integers starting from 1. The sum of the first n natural numbers can be calculated using the formula: sum = n * (n + 1) / 2.
--> For example, if n = 10, the return value should be 55.
*/

#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum = 0;
    cout<<"Enter a positve integer: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum = n*(n+1)/2;
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;
}