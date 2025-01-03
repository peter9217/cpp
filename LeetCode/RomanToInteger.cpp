#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<string,int> cmap ={{"M", 1000},{"CM", 900},{"D", 500},{"CD", 400}, {"C",100}, {"XC", 90}, {"L", 50}, {"XL",40}, {"X",10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I",1}};
        int sum = 0;
        string st= "P";
        for (int i=0; i<s.size(); i++) {
            string key(1, s[i]);
            auto it = cmap.find(key);
            if(it->first!=st && (st=="I"&&(it->first=="X"||it->first=="V")||(st=="X"&&(it->first=="L"||it->first=="C"))||(st=="C"&&(it->first=="M"||it->first=="D")))){
                
                sum -= cmap[st];
                st +=it->first;
                sum += cmap[st];
            }else{
                sum += it->second;
                st=it->first;
            }
        };

        return sum;

    }
};

int main() {
    
    string target = "MCMXCIV";

    Solution solution; // Solution 클래스 객체 생성
    int result = solution.romanToInt(target); // 함수 호출
    cout <<  result << endl;

    return 0;
}