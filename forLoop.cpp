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