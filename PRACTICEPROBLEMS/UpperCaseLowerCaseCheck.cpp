#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"LowerCase"<<endl;
    }else if(ch>='A' && ch<='Z'){
        cout<<"UpperCase"<<endl;
    }else{
        cout<<"Invalid character!"<<endl;
    }

    return 0;
}