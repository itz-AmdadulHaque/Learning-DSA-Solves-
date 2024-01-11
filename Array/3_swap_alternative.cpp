#include<iostream>
using namespace std;

void swapAlternative(int arr[], int size)
{
    for(int i=0; i+1<size; i+=2){
        swap(arr[i], arr[i+1]);
    }
}
int main(){
    int arr[] = {2, 7, 5, 9, 4, 6};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // for(int i=0; i<n/2; i++){
    //     int tamp = arr[i];
    //     arr[i] = arr[n-1-i];
    //     arr[n-1-i] = tamp;
    // }
    swapAlternative(arr, n);

    for(int i=0; i<n; i++){
            cout<< arr[i]<< " ";
        }


return 0;
}