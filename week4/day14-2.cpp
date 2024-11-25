#include <iostream>
using namespace std;

class MyClass {
private:
    int* data;
public:
    // 기본 생성자
    MyClass(int value) {
        data = new int(value);
        cout << "Constructor\n";
    }

    // 이동 생성자
    MyClass(MyClass&& other) noexcept {
        data = other.data;   // 자원 이동
        other.data = nullptr; // 원래 객체의 자원 포인터를 null로 설정
    }

    // 소멸자
    ~MyClass() {
        delete data;
        cout << "Destructor\n";
    }

    void printData() {
        cout << "Data: " << *data << endl;
    }
};
class MyClass2 {
private:
    int value;
public:
    explicit MyClass2(int v) : value(v) {}
    MyClass2 operator+(const MyClass2& other) {
        return MyClass2(value + other.value);
    }
};
class MyClass3 {
private:
    int data;
    static int count;  // 정적 멤버 변수
public:
        // 생성자
    MyClass3(int value) : data(value) {
        count++;  // 객체가 생성될 때마다 count 증가
    }

    // 정적 멤버 함수
    static void printCount() {
        cout << "Number of objects: " << count << endl;
    }
    // 프렌드 함수 선언
    friend void FprintData(const MyClass3& obj);
    // 일반 멤버 함수
    void printData() const {
        cout << "Data: " << data << endl;
    }
};
void FprintData(const MyClass3& obj) {
    cout << "Data: " << obj.data << endl;  // private 멤버에 접근 가능
}
int MyClass3::count = 0;
int main() {
    MyClass obj1(10);          // 기본 생성자 호출
    MyClass obj2 = move(obj1);  // 이동 생성자 호출

    obj2.printData();           // Data: 10

    MyClass3 obj3(10);
    MyClass3 obj4(20);

     MyClass3::printCount();  // 출력: Number of objects: 2

    obj3.printData();  
    obj4.printData(); 
    cout<<"------------------"<<endl;
    cout<<"프렌드로 접근";
    FprintData(obj3);
    return 0;
}