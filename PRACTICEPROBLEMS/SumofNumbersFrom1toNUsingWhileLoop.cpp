#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int sum =0;
    int count=1;
    while(count<=n){
        sum+=count;
        count++;
    }
    cout<<sum<<endl;
    return 0;
}