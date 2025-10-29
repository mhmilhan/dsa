#include<iostream>

using namespace std;

int main() {

    int B[5] = {1, 2, 3, 4, 5}; //array declaration
    int C[] = {2, 3, 4}; //another way to declare array without defining size.

    int A[5]; //declaring array without value
    A[0] = 1; //putting value into declared array using index method.
    A[2] = 5;

    // cout<<sizeof(A)<<endl; 
    // cout<<A[2]<<endl;
    
    // accesing all the value of array using for loop

    // for(int i = 0; i < 5; i++ ) {
    //     cout<<B[i]<<endl;
    // }

    // accesing array using for each loop
    // for(int x:C) {
    //     cout<<x<<endl;
    // }

    int n;
    cout<<"Enter Size:"<<endl;
    cin>>n;

    int D[n];
    D[0] = 5; //all the other values are garbage value except this one, garbage means which are value but doesn't belong to this array

    for (int x:D) {
        cout<<x<<endl; 
    }

    return 0;
}
