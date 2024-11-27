#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // int number;
    // cout << "----입출력 스트림"<<endl;
    // cout << "숫자 입력";
    // cin >> number;
    // cout << "입력한 숫자" <<number;
    cout << "----파일 스트림"<<endl;
    cout << "----파일 쓰기"<<endl;
    ofstream outFile("learn/week4/text.txt");
    if (outFile.is_open()){
        outFile << "inin" << endl;
        outFile << "gogo" << endl;
        outFile.close();
    }else {
        cerr<<endl;
    }
    cout << "----파일 쓰기 완료"<<endl;


    cout << "----파일 읽기"<<endl;
    ifstream inFile("learn/week4/text.txt");
    if(inFile.is_open()){
        string line;
        while (getline(inFile, line)){
            cout << line << endl;
        }
        inFile.close();
    };
    cout << "----파일 읽기 완료"<<endl;

    cout << "----스트림 조작."<<endl;
    cout <<"단순히 줄바꾸는 개행"<< "\n"; 
    cout <<"스트림을 비우는 endl"<< endl; 
    cout << "----스트림 조작. 포맷팅"<<endl;
    cout <<fixed<< setprecision(2); 
    cout <<"3.444444="<<3.444444<<"\n" ; 
    cout <<"3.444444="<<3.444444<<endl; ; 
    cout << setw(50)<< right << "왼쪽";
    cout << setw(10)<< left << "오른쪽";
    cout << "----스트림 특징 ."<<endl;
    cout << "스트림"<<"\n";
    cout << "확인";
    cout << eof();

    return 0;
}