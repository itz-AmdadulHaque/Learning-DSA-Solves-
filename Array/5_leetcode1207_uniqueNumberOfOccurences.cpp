/*
Given an array of integers arr, return true if the number of occurrences 
of each value in the array is unique or false otherwise.

Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:
Input: arr = [1,2]
Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

 
#include<bits/stdc++.h>   //must use to use some stl function 
using namespace std;
int main(){
    int arr[] = {-3,0,1,-3,1,1,1,-3,10,0};
    bool isUnique = true;
    int n = sizeof(arr)/sizeof(arr[0]);

    int count[2001] = {0};  //range is from -1000 to 0 to 1000

    // array dont have negitive index so add 1000;
    for(int i=0; i<n; i++){
        count[arr[i]+1000]++;
    }

    sort(count, count+2001);  //sorting the full array, Time complexity: O(nlogn)

    for(int i=0; i<2001-1; i++){
        if(count[i]!=0 && count[i]==count[i+1]){
            isUnique = false;
        }
    }

    if(isUnique){
        cout<<"true";
    } else{
        cout<<"false";
    }
    return 0;
}
