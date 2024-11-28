#include <iostream>
#include <functional>
using namespace std;
int spring(int a);
int spring_t(int a);
string spring(string a);
template <typename T1,typename T2>
void spring(T1 a, T2 b) {
    cout <<"-------- spring(template, template) 함수 호출" << endl ; 
    cout <<"a = "<< a <<"\nb = "<< b<<endl;
}
class pluss {
    private:
        int value;
    public:
        pluss(int v) {value=v;};
        int operator()(int x) const {
        return x+value;
    }
};
int main(){
    cout <<"-------- spring 함수 호출" << endl ; 
    cout <<"spring(5) = "<< spring(5)<<endl;
    cout <<"spring(d) = "<< spring("d") << endl;
    spring(5, "s");
    spring("ab", "d");
    auto add = [](int a, int b)->int { return a + b; };
    cout << "3 + 4 = " << add(3, 4) << endl;
    int (*f_spring)(int);
    f_spring = spring;
    cout << endl;
    cout << f_spring(5)<<endl;
    int (*f_arr[2])(int) = { spring, spring_t };
    cout << f_arr[0](5) << endl;
    cout << f_arr[1](5) << endl;
    pluss p_five(5);
    cout << p_five(10)<<endl; 

    // function<int(int)> func = static_cast<int(*)(int)>(spring);
    function<int(int)> func = [](int a) { return spring(a); };
    cout << func(3);
    auto b_spring = bind([](int a) { return spring(a); }, 10);
    cout << b_spring() ;
    return 0;

}
int spring(int a){
    cout <<"-------- spring(int) 함수 호출" << endl ; 
    return a+1;
}
int spring_t(int a){
    cout <<"-------- spring_t(int) 함수 호출" << endl ; 
    return a+3;
}
string spring(string a){
    cout <<"-------- spring(string) 함수 호출" << endl ; 
    return a+"s";
}