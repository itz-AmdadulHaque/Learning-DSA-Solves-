/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position 
of a given target value.

If the target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Approach: 
We applied binary search and when found the targeted value, we store it index and search for any existing value
before that by applying binary search on the elements before the found value, if the value found again then updated
the index. That's how we found the first occurrence. Similarly we found the last occurrence by checking the elements 
after the found value.
*/

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 4, 4, 4, 6, 7};

    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;  //search

    cout<< "firt position: "<< firstOcc(arr, n, k)<<endl<<"last position: "<< lastOcc(arr, n, k);
    
    return 0;
}