/* 
This is Program to check if a number is greater than five.
If the number is greater than 5, return "Yes". Otherwise, return "No".
For example, if num = 7, the output should be "Yes".
*/

#include<iostream>
using namespace std;

int main(){
    //Declaring a variable
    int num;
    //This will take input from user
    cout<<"Enter a Number: ";
    //This will store the input in num variable
    cin>>num;
    //This will check if the number is greater than 5 or not
    if(num>5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}