#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {2, 7, 5, 9, 4, 7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // for(int i=0; i<n/2; i++){
    //     int tamp = arr[i];
    //     arr[i] = arr[n-1-i];
    //     arr[n-1-i] = tamp;
    // }
    reverse(arr, n);

    for(int i=0; i<n; i++){
            cout<< arr[i]<< " ";
        }


return 0;
}