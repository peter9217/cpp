#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main(){
    stack<string> st;
    cout << "a 입력"<<endl;
    st.push("a");
    cout << "b 입력"<<endl;
    st.push("b");
    cout << "c 입력"<<endl;
    st.push("c");
    cout << "top = " <<st.top()<<endl;
    cout << "top삭제"<<endl;
    st.pop();
    cout << "top = " <<st.top()<<endl;
    cout << "top삭제"<<endl;
    st.pop();
    cout << "top = " <<st.top()<<endl;



    return 0;
}