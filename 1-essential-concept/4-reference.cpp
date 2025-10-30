#include<iostream>
using namespace std;

int main () {
    int a = 10;
    int &r = a; //it uses the same memory, same value, just another name
    
    cout<<a<<endl<<r<<endl;

    int b = 25;
    r = b;

    cout<<b<<endl<<a<<endl<<r<<endl;
    return 0;
};