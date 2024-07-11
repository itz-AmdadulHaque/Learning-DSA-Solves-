#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main(){
    int arr[] = {5, 2, 10, 6, 3};

    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, size);

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

    return 0;
}