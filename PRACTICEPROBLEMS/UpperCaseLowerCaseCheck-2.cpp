#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"UpperCase"<<endl;
    }else if(ch>=97 && ch<=122){
        cout<<"LowerCase"<<endl;
    }else{
        cout<<"Invalid character!"<<endl;
    }
    
    return 0;
}