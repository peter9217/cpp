#include <iostream>

using namespace std;

int main(){
    float a = 5.5;
    int* p = (int*)&a;
    cout << p <<"\n";
    cout << *p <<"\n";
    cout << &p <<"\n";
    return 0;
}