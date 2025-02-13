/* 
This is Program to check if a number is greater than five.
If the number is greater than 5, return "Yes". Otherwise, return "No".
For example, if num = 7, the output should be "Yes".
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num>5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}