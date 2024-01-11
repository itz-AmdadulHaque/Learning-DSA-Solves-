/*
Leetcode 33. Search in Rotated Sorted Array
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot
index k (1 <= k < nums.length) such that the resulting array is 
[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 

For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, 
return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

Example 3:
Input: nums = [1], target = 0
Output: -1
Constraints:
    1 <= nums.length <= 5000
    -104 <= nums[i] <= 104
    All values of nums are unique.
    nums is an ascending array that is possibly rotated.
    -104 <= target <= 104
*/

/*
Approach:
First find pivot(minimum) and then use binary search on one of the two sorts. 
As we know rotated arrays can have two sorts. The Search element must be on 
one of the two sorts. Here, the array can also have only one sort due to
multiple rotations, like [1, 2, 3, 4], as we saw in the previous question.
*/

#include<iostream>
using namespace std;

int pivot(int arr[], int n){
        int s = 0, e = n -1;
        int mid = s + (e - s)/2;

        while(s < e){
            if(arr[mid] >= arr[0] && arr[0] >= arr[e]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
            mid = s + (e - s)/2;
        }
        return mid;
    }
   
    int binarySearch(int arr[], int s, int e, int key){
        int mid = s + (e-s)/2;

        while(s <= e) {
            if(arr[mid] == key){
                return mid;
            }
            else if(key > arr[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return -1;
    }


int main(){
    int arr[] = {4,5,6,0,1,2};
    int target = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    int p = pivot(arr, n);

    if(target >= arr[p] && target <= arr[n]){
        cout<< binarySearch(arr, p, n, target) <<endl;;
    }
    else{
        cout<< binarySearch(arr, 0, p-1, target)<< endl;;
    }
    return 0;
}
