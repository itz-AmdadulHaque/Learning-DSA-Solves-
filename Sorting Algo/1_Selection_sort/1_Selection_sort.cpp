#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){

            if(arr[j]< arr[minIndex])
                minIndex = j;
                
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[] = {5, 2, 10, 6, 3};

    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, size);

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

    return 0;
}