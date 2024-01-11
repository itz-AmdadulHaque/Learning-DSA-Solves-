#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    // array size can be 2^31 then if start and end both on last index, then cause interger value overflow
    int mid = start + (end-start)/2;  //same as (start+end)/2

    while(start <= end){
        if(arr[mid] == key){
            return mid;  //found
        }
        if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;  //not found
}

int main(){
    int arr[] = {1, 5, 6, 7, 90, 100};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key= 21;
    cout<<"index of key is "<<binarySearch(arr, n, key)<<endl;
    return 0;
}