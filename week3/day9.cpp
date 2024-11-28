#include <iostream>

using namespace std;

void increment(int &num) {
    cout <<"-------- intcrement 함수 호출(b+1)"<<"\n" ; 
    num += 1; // num은 원본 변수를 참조하므로 호출한 변수의 값이 증가됨
}

void justPrintValue(const int &num) {
    cout <<"-------- justPrintValue 함수 호출" << endl ; 
    // num += 1; //read-only
}

int main(){
    int a=0;
    int &aal=a;

    cout <<"-------- b=5"<<"\n" ; 
    int b = 5;
    increment(b); 
    cout <<"b = "<< b << endl; 
    justPrintValue(b); 
    cout <<"b = "<< b << endl; 

    int c=a;
    c++;
    cout <<"-------- c=a , c++"<<"\n" ; 
    cout <<"a = "<< a<< endl;
    cout <<"c = "<< c<< endl;
    return 0;
}