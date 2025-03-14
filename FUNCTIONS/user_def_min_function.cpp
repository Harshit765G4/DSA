#include<bits/stdc++.h>
using namespace std;

int minnum(int num1,int num2){
        if(num1<num2){
            return num1;
        }
        else{
            return num2;
        }
    }
    

    int main(){
        int num1, num2;
        cout<< "Enter two Numbers: ";
        cin>>num1>>num2;
        int minimum = minnum(num1, num2);
        cout <<minimum<<endl;
        return 0;
    }