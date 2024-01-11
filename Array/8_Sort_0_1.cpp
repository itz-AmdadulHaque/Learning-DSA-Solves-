#include<iostream>
using namespace std;

void arraySort(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1) {
            j--;
        }
        if(arr[i]==1 && arr[j]==0){
            int temp =arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
}
int main(){
    int arr[] = {0, 0, 1, 0, 0, 1 , 0, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    arraySort(arr, n);
    
    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}