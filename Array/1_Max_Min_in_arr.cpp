#include<iostream>
using namespace std;

int maxValue(int arr[], int size){
    int x = INT_MIN;
    for(int i=0; i<size; i++){
        // if(arr[i] > x){
        //     x = arr[i];
        // }
        x = max(x, arr[i]);
    }
    return x;
}

int minValue(int arr[], int size){
    int x = INT_MAX;
    for(int i=0; i<size; i++){
        // if(arr[i] < x){
        //     x = arr[i];
        // }
        x = min(x, arr[i]);
    }
    return x;
}
int main(){
    int arr[6] = {10, -3, 30, 7, 11, 25};
    
    cout<<"max value: "<<maxValue(arr, 6)<<endl;
    cout<<"min value: "<<minValue(arr, 6)<<endl;
    return 0;
}