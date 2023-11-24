/*
Write a function that takes the binary representation of 
an unsigned integer and returns the number of 
'1' bits it has (also known as the Hamming weight).

Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 
has a total of three '1' bits.
*/

//aproach 
//bitwise AND operation the given number with 1
// example 4 & 1 = 100 & 001 = 0,
// then right shift 1 and do same until number is zero
//after every right shift, 10 & 01 = 0 , 1 & 1 = 1
#include <iostream>
using namespace std;

int main(){
    int n, count=0; 
    cin>>n;

    while(n>0){
        if(n & 1){
            count++;
        }
        n = n>>1;
    }

    cout<<"answer: "<<count<<endl;

    return 0;
}