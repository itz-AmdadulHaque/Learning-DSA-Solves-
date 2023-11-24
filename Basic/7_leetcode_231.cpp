/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16

Constraints:
-231 <= n <= 231 - 1
*/

#include<iostream>
#include<math.h>
using namespace std;

// brute force 
// bool isPowerOfTwo(int n) {
//     for (int i=0; i<=30; i++){
//         if (pow(2, i) == n){
//             return true;
//         }
//     }
//     return false;
// }

//optimise solution
bool isPowerOfTwo(int n) {
    // leetcode test case avoided negetive number
    if (n<0){    
        return false;
    }

    if( !(n & (n-1)) && n!=0 ){ 
        return true;
    }

    return false;
}

int main(){
    int n;
    cin>> n;
    
    if(isPowerOfTwo(n)) {
       cout<< "true"<< endl; 
    }
    else {
       cout<< "false"<< endl; 
    }

    return 0;
}