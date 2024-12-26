#include <iostream>

using namespace std;
int fibonacci(int n) {
    cout<<"n = "<<n<<endl;
    if (n <= 1) return n; // 기저 조건
    return fibonacci(n - 1) + fibonacci(n - 2); // 재귀 단계
}


int factorial(int n){
    if(n==5) return n;
    return factorial(n+1);
}

int main() {
    cout <<"factorual(1) = "<< factorial(1)<<endl;
    cout <<"fibonacci(5) = "<< fibonacci(7)<<endl;
    return 0;
}