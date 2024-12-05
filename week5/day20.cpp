#include <iostream>
#include <random>
#include <memory>

using namespace std;

template <typename T1,typename T2>
auto add(T1 a,T2 b){

    return a+b;
}
// template <typename T>
// void inputVariable(T& var){
//     cout << "var is.. ";
//     cin >> var ;
//     cout << "var = " <<var <<endl;
// }
bool randomNumber(){
    random_device rd; // 하드웨어 시드
    mt19937 gen(rd()); // Mersenne Twister 엔진
    uniform_int_distribution<int> dist(1, 100); // 1부터 100까지의 정수
    int intNum = dist(gen);
    return intNum >= 80;
}

class Resource {
public:
    Resource() { cout << "Resource acquired" << endl; }
    ~Resource() { cout << "Resource released" << endl; }
};

int main() {   
    // 난수 엔진과 분포 설정
    try
    {
        cout <<"add(1,2) = "<< add(1, 2) << endl;
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }


    try
    {
        throw runtime_error("Explicit exception thrown for testing.");
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }

    if(!randomNumber()){
        cout << "Error"<<endl;
    }else{
        cout << "True"<<endl;

    }
    return 0;

}