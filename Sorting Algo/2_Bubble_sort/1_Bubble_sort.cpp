#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {
    bool swapped = false;  // tracking swap

    // Reduce j loop iterations by i
    for (int j = 0; j < n - i - 1; j++) { 

      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;   
      }
    }

    // If no swaps occurred in a pass, the array is already sorted and we can exit
    if (!swapped) {
      break;
    }
  }
}

int main(){
    int arr[] = {5, 2, 10, 6, 3};

    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

    return 0;
}