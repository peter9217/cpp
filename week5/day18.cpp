#include <iostream>
#include <thread>
#include <string>
#include <mutex>

using namespace std;
mutex mtx;

void printMessage(const string& message);
int counter = 0;
void increment() {
    for (int i = 0; i < 100000; ++i) {
        lock_guard<mutex> lock(mtx);
        ++counter; // 데이터 경쟁 발생 가능
    }
    cout << "increment함수 호출, 실행된 쓰레드의 ID : " <<this_thread::get_id()<<endl;
}

int main() {
    cout << "---------쓰레드 설정"<<endl;
    thread t1(printMessage, "쓰레드 호출");
    t1.join();
    
    cout << "---------람다 표현식과 쓰레드"<<endl;
    thread t2([](){
        cout<<"람다 표현식을 적용한 쓰레드 호출" << endl;
    });
    t2.join();
    
    thread t3(increment);
    thread t4(increment);
    t3.join();
    t4.join();
    cout << "Counter : " << counter << endl;


    cout << "Counter: " << counter << endl; // 예상치 못한 결과. 단, mutex로 인해 정상적인 결과

    cout << "Number of threads supported: "
              << thread::hardware_concurrency() << endl;


    return 0;
}

void printMessage(const string& message){
    cout << message << endl;
    cout << "함수 호출" << endl;
};