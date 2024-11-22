#include <iostream>

using namespace std;

void increment(int &num) {
    num += 1; // num은 원본 변수를 참조하므로 호출한 변수의 값이 증가됨
} // callbyvalue : 인수 저장 후 사용
  // callbyreference : 주소 참조 연산자  

void justPrintValue(const int &num) {
    // num += 1; //read-only
    cout << num;
}

int main(){
    int a=0;
    int &aal=a;
    cout << aal << endl;

    int b = 5;
    int* f = b;
    increment(b); 
    increment(f); 
    cout << b; 
    justPrintValue(b); 
    cout << b << endl; 

    cout << a;
    int c=a;
    c++;
    cout << a;
    cout << c;
    return 0;
}
