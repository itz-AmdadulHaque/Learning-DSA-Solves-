#include<iostream>
using namespace std;

// is a number prime or not
bool isPrime(int n){

    if(n==1 || n==2) return true;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    } else {
        cout<<"not prime"<<endl;
    }

    return 0;
}