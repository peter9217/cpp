#include <iostream>

using namespace std;

void increment(int &num) {
    num += 1; // num은 원본 변수를 참조하므로 호출한 변수의 값이 증가됨
}

void justPrintValue(const int &num) {
    // num += 1; //read-only
    cout << num;
}

int main(){
    int a=0;
    int &aal=a;
    cout << aal;

    int b = 5;
    increment(b); 
    cout << b; 
    justPrintValue(b); 
    cout << b; 

    cout << a;
    int c=a;
    c++;
    cout << a;
    cout << c;
    return 0;
}