#include<iostream>
using namespace std;
int main(){
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int i,j;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(i==j){
                continue;
            } else if(nums[i]+nums[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    return 0;
}