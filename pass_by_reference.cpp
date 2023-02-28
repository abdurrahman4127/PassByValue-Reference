#include <bits/stdc++.h>
using namespace std;

// pass by value
void printValues(int &a, int &b){
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

// changes because we're just passing references
void swap_ref(int &a, int &b){
    cout << "pass by reference - after swap: " << endl;

    int temp = a;
    a = b;
    b = a;
}


int main(){
    int a = 8;
    int b = 7;
    printValues(a, b);

    swap_ref(a, b);
    printValues(a, b);

    return 0;
}
