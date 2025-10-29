#include<stdio.h>
#include<iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int width;
}; //we can declare variable of this class after the bracket, r1, r2, r3 etc;

struct Triangle {
    int height;
    int base; 
    char triangle;
} t1, t2;

int main() 
{
    struct Rectangle r1={10, 5}; //we can also declare it outside the main function; that will be global var.
    cout<<sizeof(r1)<<endl;
    // printf("%lu", sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.width<<endl;

    //Access the length and width
    r1.length = 15;
    r1.width = 10;
    cout<<r1.length<<endl;
    cout<<r1.width<<endl;

    

    // cout<<sizeof(t1)<<endl; //we know that char allocate only 1 bytes to the memory, so we expect it will output 9, then why 12?
    // printf("%lu", sizeof(t1));
    return 0;
} 