#include <iostream>
#include <string>

using namespace std;

class Cat {
    protected:
        string name;
        int age;
    public:
        Cat(const string& objName, int myAge) : name(objName), age(myAge) {}
        virtual void meow() const {
        cout << "moew: " << name << endl;
    
        }
};
class Family {
    public:
    void say() {
        cout << "안녕하세요 가족입니다."; 
    }
};
class Kitty : public Cat, public Family{
    public:
        Kitty(const string& objName, int myAge) : Cat(objName, myAge) {}
        void meow() const override {
            cout << "moewwwwww: " << name <<endl;
        } 
};


int main(){
    Kitty rommy("rommy", 10);
    rommy.meow();
    Kitty sammy("sammy", 10);
    sammy.meow();
    rommy.say();

    return 0;
}