#include <iostream>


using namespace std;
typedef signed short Sshort;
int i = 10;
int a = 111;
Sshort pluss(Sshort, Sshort y=50);
inline int pluss(int, int y=50);
int main(){
    Sshort p = pluss(static_cast<Sshort>(1), static_cast<Sshort>(2));
    cout << p<<"---------\n";
    int d = pluss(1, 2);
    cout << d<<"---------\n";
    // cout << i <<"\n";
    // cout << a;
    // p = pluss(30, 30);
    // cout << p<<"---------\n";
    return 0;
}

Sshort pluss(Sshort x, Sshort y){
    Sshort i = x+y;
    a = 222;
    cout << i <<"---\n";
    return i;
}
int pluss(int x, int y){
    int i = x-y;
    a = 222;
    cout << i <<"---\n";
    return i;
}