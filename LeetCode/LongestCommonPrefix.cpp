#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];  
        string result = "";
        for (int i = 0; i < strs[0].size(); i++) {
            char current_char = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].size() <= i || strs[j][i] != current_char) {
                    return result;  
                }
            }
            result += current_char;  
        }
        return result;  
    }
};

int main() {
    
    vector<string> target = {"flower","flow","flight"};

    Solution solution; // Solution 클래스 객체 생성
    string result = solution.longestCommonPrefix(target); // 함수 호출
    cout <<  result << endl;

    return 0;
}