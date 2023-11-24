// decimal to binary
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    //for negitive number, asuming integer is 16 bit or 2 byte
    if(n <0 ){
        n = pow(2, 16) + n;
    }
    //cout<< n <<endl;
    
    unsigned long long int ans = 0, i=0;
    while(n!= 0){
        int lastBit = n & 1;

        ans = lastBit * pow(10, i) + ans;

        // n>>1 is same as n/2
        n = n >> 1;
        i++;
    }

    cout<< "Answer: " <<ans;
    return 0;
}