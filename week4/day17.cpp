#include <iostream> // 표준 라이브러리
#include "text.h"
#define customN 33333
#define custom(x) ((x)*(x))
#define DEBUG

using namespace std;

int main() {
    #ifdef DEBUG
        cout << "DEBUG 상태 입니다."<<endl;
    #else
        cout << "DEBUG 상태가 아닙니다" <<endl;
    #endif
    cout << "#define custom = " << customN<< endl;
    cout << "#define custom(x (x*x)) = " << custom(2)<< endl;
    //#define custom = 33333
    //#define custom(x (x*x)) = 4
    cout <<"headerNumber = "<< headerNumber<<endl;
    #undef DEBUG

    #ifdef DEBUG
        cout << "DEBUG 상태 입니다."<<endl;
    #else
        cout << "DEBUG 상태가 아닙니다" <<endl;
    #endif
    return 0;
}