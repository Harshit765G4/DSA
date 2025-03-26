/*
Write a program to print the following Patter

1
22
333
4444

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}