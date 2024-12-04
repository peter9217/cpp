#include <iostream>
#include <typeinfo>


using namespace std;

template <typename T>
T add(T a, T b){
    return a+b;
}

template <typename T>
class Calculator{
    public :
    T add2(T a, T b){
        return a + b;
    }
    T subtract(T a, T b){
        return a - b;
    }
};

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void display() {
        cout << "첫번째 : " << first<<" (타입 : "<<typeid(first).name() << ") 두번째 : " << second<<" (타입 : "<<typeid(second).name() <<")"<< endl;
        cout << "첫번째 + 두번째 :    " << first+second << endl;
    }
};

template <>
class Pair<char, char> {
private:
    char first;
    char second;
public:
    Pair(char a, char b) : first(a), second(b) {}

    void display() {
        cout << "char 자료형에 대한 특수화입니다. 값 = " << first << second << endl;
    }
};


int main(){
    cout << "-------함수 템플릿" << endl;
    cout <<"add(3, 5) = "<< add(3, 5)<< endl;
    cout <<"add(string([](){return \"a\";}()), string([](){return \"b\";}())) = "<< add(string([](){return "a";}()), string([](){return "b";}()))<< endl;
    cout << "-------클래스 템플릿" <<endl;
    Calculator<int> intCalc;
    cout <<"intCalc.add2(3, 5) = "<< intCalc.add2(3, 5)<< endl;
    // cout <<"intCalc.subtract(string([](){return \"a\";}()), string([](){return \"b\";}())) = "<< intCalc.subtract(string([](){return "a";}()), string([](){return "b";}()))<< endl;
    cout << "-------다중 템플릿" <<endl;
    Pair<int, double> p1(1, 2.5);
    p1.display();

    Pair<string, char> p2("Hello", 'A');
    p2.display();
    cout << "-------템플릿 특수화" <<endl;
    Pair<string, char> p3("H", 'A');
    p3.display();
    Pair<char, char> p4('H', 'A');
    p4.display();
    
    
    return 0;
}