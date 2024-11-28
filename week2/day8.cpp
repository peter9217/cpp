#include <iostream>

using namespace std;

int main(){
    float a = 5.5;
    int* p = (int*)&a;
    cout <<"-------- Æ÷ÀÎÅÍ"<<"\n" ; 
    cout <<"int* p = " << p <<"\n";
    cout <<"*p = "<< *p <<"\n";
    cout <<"&p = "<< &p <<"\n";
    return 0;
}