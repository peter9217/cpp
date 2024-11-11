#include <iostream> 

using namespace std; 

int Function(int a){
    cout << "Function @@\n";
    return 2+a;
};
int main() { 
    cout <<"Hello, World!\n"<<"\n" ; 
    cout <<"Hellodddd\t"<<"dasd\n" ; 
    cout <<", World!\t"<<"dasd\n" ; 
    cout <<"!aaaas\t" <<"dasd"; 
    cout <<(double)7000*700<<"\n" << endl ;
    //- // 한줄 주석
    /*-  나올 때까지 주석*/
    int  ab = 0;
    ab=Function(3);
    cout << ab;   // 쓰지 않으면 warning이 뜸
    cout << "end";
    
    return 0;
}
// 브랜치 생성 소스트리
