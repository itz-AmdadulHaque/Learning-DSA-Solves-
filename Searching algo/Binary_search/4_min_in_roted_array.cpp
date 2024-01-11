#include<iostream>
using namespace std;
int min(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        } else{
            e = mid;
        }
        mid = s + (e - s)/2;
        // cout<<"s: "<<s<<"m: "<<mid<<"e: "<<e<<endl;
    }
    // you can return s, mid, or e, in the end all point same element
    return s;
}


int main(){
    int arr[] = {4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<< min(arr, n)<<endl;
    return 0;
}

