#include<iostream>
using namespace std;

// int squreRoot(int x){
//     if(x < 0) {
//         return -1;
//     }

//     int ans = 0;
//     for(long long int i = 0; i *i <= x; i++){
//         ans = i;
//     }
//     return ans;
// }

int squreRoot(int x){
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


int main(){
    int x;
    cin>>x;

    cout<<squreRoot(x)<<endl;
    return 0;
}