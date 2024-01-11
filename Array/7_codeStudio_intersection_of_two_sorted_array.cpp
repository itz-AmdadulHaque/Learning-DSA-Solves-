

#include<bits/stdc++.h>
using namespace std;

//brute force
// void interesection(int arr1[], int arr2[], int n, int m){
//     // vector<int> ans;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";  // ans.push_back(arr1[i]);
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }
//     // return ans;
// }

//optimize
void interesection(int arr1[], int arr2[], int n, int m){
    int i=0, j=0;
    // vector<int> ans;
    while(i<n && j<m){ 
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";  // ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        } 
        else if(arr1[i] > arr2[j]){
            j++;
        }   
    }
    // return ans;
}

int main(){
    int a[]= {1, 2, 2, 2, 4};
    int b[]={2, 2, 3, 3, 4};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    interesection(a, b, n, m);
    return 0;
}