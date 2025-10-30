#include<iostream>
using namespace std;

int add(int a, int b) {
    int c;
    c = a + b;
    return c;
};

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 15;

    int sum = add(x, y);

    swap(x, y);

    cout<<x<<endl<<y<<endl;

    cout<<sum<<endl;
}