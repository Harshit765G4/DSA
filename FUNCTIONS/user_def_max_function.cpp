#include<bits/stdc++.h>
using namespace std;

int maxnum(int num1,int num2){
            if(num1>=num2){
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
        int maximum = maxnum(num1, num2);
        cout <<maximum<<endl;
        return 0;
    }