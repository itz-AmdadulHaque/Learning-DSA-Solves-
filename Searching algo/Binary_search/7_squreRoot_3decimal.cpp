#include<iostream>
using namespace std;

int integerPart(int x){
    int s = 0;
    int e = x;
    long long int mid = s + (e-s)/2;
    int ans = 0;

    while(s<=e){
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid < x){    
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        // cout<< "s :"<<s<<" mid: "<<mid<<" e: "<<e<<endl;
        
        mid = s + (e-s)/2;
    }
    return ans;
}

double decimalPart(int n, int precision, int intNum){
    double factor = 1;
    double ans = intNum;

    for(int i=0; i<precision; i++) {
        factor = factor/10;  // 0.1 then 0.01 then 0.001

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int intNum = integerPart(n);
    cout<<integerPart(n)<<endl;

    // finding decimal number upto 3 decmal point
    cout<< decimalPart(n, 3, intNum)<<endl;

    return 0;
}