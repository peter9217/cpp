#include <iostream>

using namespace std;
class AbstractBase{
    private:
    int* value;
    public :
    AbstractBase(int v) {
        value = new int(v);
    }
    // AbstractBase(const AbstractBase& other) : value(other.value){};
    // int getValue(){
    //     return *value;
    // };
    AbstractBase(const AbstractBase& other){
        value = new int(*(other.value));
    };
    int getValue(){
        return *value;
    };
    void setValue(int v){
        *value=v;
    };
    // virtual void Value1() = 0;
    virtual void Value2(){
        cout << "value"<<endl;
    };
    virtual ~AbstractBase() {
        delete value;
        cout << "delete"<<endl;
        }
};
class AllAbstractBase{
    virtual void Value1() = 0;
    virtual void Value2() = 0;
    virtual void Value3() = 0;
};
template <typename T>
class TemplateClass{
    private: T data;
    public : 
    TemplateClass(T val) : data(val){}
    T getData() {return data;}
};

int main() {
    AbstractBase aaa(2);
    AbstractBase bbb=aaa;
    cout<<"aaa의 벨류 :"<<aaa.getValue()<<endl;
    bbb.setValue(3);
    cout<<"bbb의 벨류 :"<<bbb.getValue()<<endl;
    cout<<"aaa의 벨류 :"<<aaa.getValue()<<endl;


    return 0;
}