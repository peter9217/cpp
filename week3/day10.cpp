#include <iostream>
#include <functional>
using namespace std;
int spring(int a);
int spring_t(int a);
string spring(string a);
template <typename T1,typename T2>
void spring(T1 a, T2 b) {
    cout << a << b;
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
    cout << spring(5);
    cout << spring("d") << endl;
    spring(5, "s");
    spring("ab", "d");
    auto add = [](int a, int b)->int { return a + b; };
    cout << "3 + 4 = " << add(3, 4) << endl;
    int (*f_spring)(int);
    f_spring = spring;
    cout << endl;
    cout << f_spring(5);
    int (*f_arr[2])(int) = { spring, spring_t };
    cout << f_arr[0](5);
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
    return a+1;
}
int spring_t(int a){
    return a+3;
}
string spring(string a){
    return a+"s";
}