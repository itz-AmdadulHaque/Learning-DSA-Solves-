#include<iostream>
using namespace std;

void value(int& x){        // "int &x" is same as "int& x"
    x++;
    cout<< "Inside function: " << x <<endl;  //x=6
}

int main() {
    int a = 5; 
    value(a);
    cout<<"Inside main(): "<< a <<endl;    //a=6, changed

    return 0;
}

// don't specify the default value
