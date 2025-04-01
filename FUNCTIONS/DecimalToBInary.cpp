#include<bits/stdc++.h>
using namespace std;

int decToBinary(int decNum){
    int ans = 0;
    int pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter Number from 0 To n to Print Binary Form : "<<endl;
    cin>>n;

    for(int i=0;i<=n;i++){
        cout<<decToBinary(i)<<endl;
    }
    
    return 0;
}