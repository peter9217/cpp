#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
        string intToRoman(int num) {
            string result ="";
            map<int, string> cmap ={{1000, "M"},{900, "CM"},{500, "D"},{400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
            auto it = cmap.rbegin();
            while(num!=0){
                while(it->first<=num){
                    num-=it->first;
                    result += it->second;
                }
                ++it;
            };
            return result;
        }
    };

int main() {
    
    int target = 12356;

    Solution solution; // Solution 클래스 객체 생성
    string result = solution.intToRoman(target); // 함수 호출
    cout <<  result << endl;

    return 0;
}