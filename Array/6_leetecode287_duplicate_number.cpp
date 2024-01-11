#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[] = {3,1,3,4,2};

    int n = sizeof(nums)/sizeof(nums[0]);
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = (nums[i] ^ ans) ^ i;
    }

    cout<<ans;
    return 0;
}