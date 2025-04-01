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
}

int main(){
    
    return 0;
}