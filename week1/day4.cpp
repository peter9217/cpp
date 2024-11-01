#include <iostream>


using namespace std;

int main(){
    int a=0;
    {
        int a=2;
        cout << a;
    }
    cout << a;
    a++;
    cout << a;
    int b =1;
    cout << b<<"\n";
    int c =2;
    b++;
    cout << b--<<"\n";
    cout << --b<<"\n";
    cout << a+ ++b+c<<"\n";
    if(b>2||b==0){
        cout << "big"<<b;
    }else {
        cout << "s"<<b;
    }
    return 0;
}