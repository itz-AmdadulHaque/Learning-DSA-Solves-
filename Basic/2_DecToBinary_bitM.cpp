#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 0, i=0;
    while(n!= 0){
        int bit = n & 1;

        ans = bit * pow(10, i) + ans;

        // n>>1 is same as n/2
        n = n >> 1;
        i++;
    }
    
    cout<< "Answer: " <<ans;
    return 0;
}