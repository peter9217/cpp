#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> hashTable;

    hashTable["aaaa"] = 1;
    hashTable["bbbb"] = 2;
    hashTable["cccc"] = 3;
    hashTable["dddd"] = 4;

    cout << "aaaa의 값 : "<<hashTable["aaaa"] << endl;
    hashTable.erase("aaaa");
    cout << "aaaa의 값 삭제"<< endl;
    cout << "aaaa의 값 : "<<hashTable["aaaa"] << endl;


    return 0;
}