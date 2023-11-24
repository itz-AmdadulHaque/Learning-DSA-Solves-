// decimal to binary
#include <iostream>
#include <math.h>
using namespace std;

int main() {
     int n;
     cin >> n; // 101
    
    int ans = 0, i=0;
    while(n){
        // get last digit
        int lastBit = n %10;
        // cout<<lastBit<<endl;

        // we don't need to calculate for zeros
        if(lastBit==1){
            ans = lastBit * pow(2, i) + ans;
        }

        n = n / 10; 
        i++;
    }

    cout<< "Answer: " <<ans;
    return 0;
}