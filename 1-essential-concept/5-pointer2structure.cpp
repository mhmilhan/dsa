#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle {
    int len;
    int wid;
};

int main() 
{

    struct Rectangle *p;
    p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    // p = new Rectangle; //c++ style
    p -> len = 10;
    p -> wid = 5;

    printf("%d", p->len);
    cout<<endl;
    cout<<p->len<<endl<<p->wid<<endl;

    return 0;
}