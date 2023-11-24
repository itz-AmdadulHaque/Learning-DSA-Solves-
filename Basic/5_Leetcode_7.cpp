/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1],
then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321
*/

#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    int ans = 0;
    while(x){
        int lastDigit = x%10;
        // if ans greater then the max number represent by the int 32 bit system
        // then an ambigius value will be given
        // ans *10 > max or ans > max/10,
        if( (ans > INT_MAX/10) || (ans < INT_MIN/10)){
            return 0;
        }
        ans = ans*10 + lastDigit;
        x = x/10;
    }

    cout<< ans <<endl; ;

    return 0;
}