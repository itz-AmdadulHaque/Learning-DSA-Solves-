/*
find the index of peak value in an array

An array arr is a mountain if the following properties hold:
arr.length >= 3

There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

Example 1:

Input: arr = [0,1,0]
Output: 1

Example 2:

Input: arr = [0,2,1,0]
Output: 1
*/

//aproach
// if arr[mid] < arr[mid+1] then peak is ahead of mid, else peak is before mid or mid is in peak.

#include<iostream>
using namespace std;
int peakValueIndex(int arr[], int n){
    int start = 0; 
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){  //peak is after the mid
            start = mid + 1;
        } 
        else {     //mid is either the peak or peak is before mid
            end = mid;   //
        }
        mid = start + (end-start)/2;
    }
    return mid;
}
int main(){
    int arr[] = {2, 3, 7, 8, 4, 0}; 

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"peak value index: "<<peakValueIndex(arr, n);
    return 0;
}