#include <iostream>

using namespace std;

int main(){
    cout << "\nint\t"<<sizeof(int);
    cout << "\nshort\t"<<sizeof(short);
    cout << "\nlong\t"<<sizeof(long);
    cout << "\nlong long\t"<<sizeof(long long);
    cout << "\nchar\t"<<sizeof(char);
    cout << "\ndouble\t"<<sizeof(double) << "\n";

    typedef signed short ss;  //변수 자료형 별칭
    ss width=10, height=10, area=width*height;
    cout << area<<"\n";
    cout << (char)127<<"\n";
    cout << "\"\'\?\\\n"<<"sasd";
    width=5;
    cout<<width<<"\n";
    enum days {aaa, bbb, ccc, sunday};
    cout << days{aaa};
    cout << days{bbb};
    cout << days{ccc}<<"\n";
    cout << days{sunday}<<"\n";
    days daysOff;
    int x;
    cin >> x;
    daysOff= days(x);
    if(daysOff==aaa)
        cout << daysOff<<"\n";
    else cout << "asd";
    return 0;

}