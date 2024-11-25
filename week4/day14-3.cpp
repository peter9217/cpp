#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
    int value2;

public:
    explicit MyClass(int v) : value(v) {}  // 명시적 생성자

    void printValue() const {
        cout << "Value: " << value << endl;
    }
    void printValue2() const {
        cout << "Value2: " << value2 << endl;
    }
};

int main() {
    MyClass obj1(10);  // 명시적으로 객체 생성
    obj1.printValue(); 

    // 다음과 같은 암시적 형 변환이 불가능
    // MyClass obj2 = 20; 
    
    // obj2.printValue();  
    // obj2.printValue2();  //암시적 형 변환으로 인해 value만 들어가있음
    return 0;
}