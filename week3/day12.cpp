#include <iostream>
#include <string>

using namespace std;

class cat {
    protected:
        string name;
        int age;
    public:
        cat(const string& objName, int myAge) : name(objName), age(myAge) {
            cout << "cat 按眉 积己"<<endl;
        }
        virtual void meow() const {
        cout << "moew : " << name << endl;
    
        }
};
class family {
    public:
    void say() {
        cout <<"-------- family.say" << endl ; 
        cout << "救崇窍技夸 啊练涝聪促." << endl; 
    }
};
class kitty : public cat, public family{
    public:
        kitty(const string& objName, int myAge) : cat(objName, myAge) {
            cout << "kitty 按眉 积己"<<endl;
        }
        void meow() const override {
            cout << "moewwwwww : " << name <<endl;
        } 
};


int main(){
    cout <<"-------- rommy 积己" << endl ; 
    kitty rommy("rommy", 10);
    rommy.meow();
    cout <<"-------- sammy 积己" << endl ; 
    kitty sammy("sammy", 10);
    sammy.meow();
    rommy.say();

    return 0;
}