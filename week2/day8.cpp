#include <iostream>

using namespace std;

int main(){
    int a= 5;
    int* p = &a;
    cout << p <<"\n";
    cout << *p <<"\n";
    cout << &a <<"\n";
    return 0;
}