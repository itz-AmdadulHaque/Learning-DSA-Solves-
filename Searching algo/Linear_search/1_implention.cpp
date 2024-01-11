#include<iostream>
using namespace std;

int linearSearch(int arr[], int x){
    for(int i=0; i<6; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {6, 5, 4, 3, 2, 1};

    cout<<linearSearch(arr, 7);
    
    return 0;
}