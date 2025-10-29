#include <iostream>
#include<stdio.h>
using namespace std;

struct Rectangle {
    int len;
    int wid;
};

int main()
{
    int A[5] = {2, 4, 5, 7, 8};
    int *p;
    p=A;

    for(int i=0; i<5; i++) {
        cout<<p[i]<<endl;
    }

    //malloc
    int *x;
    x=(int *)malloc(5*sizeof(int));
    x[0] = {1}; x[1]={2}; x[2]={3}; x[3]={4}; x[4]={5};

    for(int i=0; i<5; i++) 
    {
        cout<<x[i]<<endl;
    };

    //cpp way:
    int *z;
    z=new int[5];
    z[0] = {1}; z[1]={2}; z[2]={3}; z[3]={4}; z[4]={5};

    for(int i=0; i<5; i++) 
    {
        cout<<z[i]<<endl;
    };

    //dynamic allocation
    int *y;
    y= new int[5];
    y[0] = {1}; y[1]={2}; y[2]={3}; y[3]={4}; y[4]={5};

    for(int i=0; i<5; i++) 
    {
        cout<<y[i]<<endl;
    };

    delete [ ] y;
    //free(y); //c lang way to release the memory

    // pointer size in memory
    int *d1;
    char *d2;
    float *d3;
    double *d4;
    struct Rectangle *d5;

    cout<<sizeof(d1)<<endl; //pointer always take 8 bytes
    cout<<sizeof(d2)<<endl;
    cout<<sizeof(d3)<<endl;
    cout<<sizeof(d4)<<endl;
    cout<<sizeof(d5)<<endl;


    // int a = 10;
    // int *p;
    // p=&a;

    // // printf("using pointer %d", *p);
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // cout<<&a<<endl;
    
    
    // cout<<a<<endl;
    return 0;
}