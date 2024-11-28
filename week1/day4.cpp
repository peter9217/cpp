#include <iostream>


using namespace std;

int main(){
    cout <<"-------- 중괄호 외부"<<"\n" ; 
    int a=0;
        cout <<"a = "<<a<<endl;
    {
        int a=2;
        cout <<"-------- 중괄호 내부"<<"\n" ; 
        cout <<"a = "<<a<<endl;
    }
        cout <<"-------- 중괄호 외부"<<"\n" ; 
        cout <<"a = "<<a<<endl;
    int b =1;
    cout <<"-------- ++로 인한 값 증가"<<"\n" ; 
    a++;
    cout <<"a++ = "<< a<<endl;
    int c =2;
    b++;
    cout <<"-------- --로 인한 값 감소"<<"\n" ; 
    cout <<"b = "<< b<<"\n";
    cout <<"b-- = "<< b--<<"\n";
    cout <<"--b = "<< --b<<"\n";
    cout <<"a+ ++b+c = "<< a+ ++b+c<<"\n";
    if(b>2||b==0){
        cout << "big"<<b;
    }else {
        cout << "b=="<<b;
    }
    return 0;
}