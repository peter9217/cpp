#include <iostream>
#include <string>

using namespace std;

class cat {
    protected:
        string name;
        int age;
    public:
        cat(const string& objName, int myAge) : name(objName), age(myAge) {}
        virtual void meow() const {
        cout << "moew: " << name << endl;
    
        }
};
class family {
    public:
    void say() {
        cout << "안녕하세요 가족입니다."; 
    }
};
class kitty : public cat, public family{
    public:
        kitty(const string& objName, int myAge) : cat(objName, myAge) {}
        void meow() const override {
            cout << "moewwwwww: " << name <<endl;
        } 
};


int main(){
    kitty rommy("rommy", 10);
    rommy.meow();
    kitty sammy("sammy", 10);
    sammy.meow();
    rommy.say();

    return 0;
}