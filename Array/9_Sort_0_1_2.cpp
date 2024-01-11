#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int start = 0, middle = 0, end = n-1;
    while(middle <= end){
        if(arr[middle] == 0){
            cout<< "S: "<<arr[start]<<"and"<< arr[middle]<<endl;
            swap(arr[start], arr[middle]);
            middle++;
            start++;
        }

        else if(arr[middle] == 1){
            middle++;
        }

        else if(arr[middle] == 2){
            cout<< "E: "<<arr[middle]<<"and"<< arr[end]<<endl;
            swap(arr[middle], arr[end]);
            end--;
        }
    }
}
int main(){
    int arr[] = {2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr, n);

    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}