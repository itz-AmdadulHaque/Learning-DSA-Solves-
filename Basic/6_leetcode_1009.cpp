/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

 

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    int i = 0;
    int x = n;
    while(n !=0){
        n = n>>1;
        i++;
    }
    //if n=5 (101) then 101 ^ 111 = 010 = 2
    //here 111 = 7 is found 2^3 -1, maxNum by 3 bit
    int ans = pow(2, i)-1;
    // cout<< "ans: "<<ans<<"x: "<<x<<endl;
    ans = ans ^ x;
    cout<<ans;

    return 0;
}