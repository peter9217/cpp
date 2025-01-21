#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <stack>
#include <set>

using namespace std;


class Solution {
public:
    int myAtoi(string s) {
        size_t index = 0;
        while (index < s.length() && s[index] == ' ') index++;
        bool plus = true;
        if (index < s.length() && (s[index] == '+' || s[index] == '-')) {
            plus = (s[index] == '+') ? true : false;
            index++;
        }
        long long result = 0; 
        while (index < s.length() && isdigit(s[index])) {
            result = result * 10 + (s[index] - '0');

            if (plus && result > INT_MAX) return INT_MAX;
            if (!plus && -result < INT_MIN) return INT_MIN;

            index++;
        }

        return static_cast<int>(plus ? result : -result);
    }
};

int main() {
    string target = "123v123rea235235235hufsdbnoilkgdf";
    
    Solution solution; // Solution 클래스 객체 생성
    int result = solution.myAtoi(target); // 함수 호출
    
    // Print merged list
    cout<<result;
    return 0;
}