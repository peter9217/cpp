#include <iostream>
#include <string>

using namespace std;

inline string meow();
class cat {
    string name;
    unsigned int age;
public:
    cat() {
        name = "辨成捞";
        age = 0;
    }
    cat(string initialName, unsigned int initialAge) {
        name = initialName;
        age = initialAge;
    }
    ~cat(){};
    void setName(const string newName){
        name=newName; 
    }
    string getName() const {
        return name;
    }
    string meow() const {
        return "具克";
    }
};

int main(){
    cat rommy=cat();
    rommy.setName("肺固");
    cout <<"-------- 肺固 积己"<<"\n" ; 
    cout <<"rommy.getName() = "<< rommy.getName()<<endl;
    cat semmy("货固",2);
    cout <<"-------- 货固 积己"<<"\n" ; 
    cout <<"semmy.getName() = "<< semmy.getName()<<endl;
    // cout << cat.meow();
}