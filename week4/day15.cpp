#include <iostream>

using namespace std;

class First{
    public:
    void first() {cout << "first"<<endl;}
    void show() {cout << "first"<<endl;}
};
class Second{
    public:
    void second() {cout << "second" <<endl;}
    void show() {cout << "second" <<endl;}
};
class Chil1 : virtual public First{};
class Chil2 : virtual public First{};
class LastChil : public Chil1, public Chil2{};


int main() {
    Chil1 chil1;
    // Chil2 chil2;
    LastChil LastChil;
    chil1.first();
    // chil2.second();
    // chil2.Second::show();
    cout<<"LastChil 확인 ---"<<endl;
    LastChil.first();

    cout<<"main 종료"<<endl;
    return 0;
}