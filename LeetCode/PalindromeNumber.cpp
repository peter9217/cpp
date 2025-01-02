#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // string s = to_string(x);
        // string r = s;
        // reverse(r.begin(), r.end());
        // if(s==r) return true;
        // return false;
        int original = x;
        int reverse=0;
        while(x > 0){
            reverse = reverse * 10 + (x % 10);  
            x /= 10;  //
        }
        return original == reverse;
    }
};

int main() {
    
    int target = 121;

    Solution solution; // Solution 클래스 객체 생성
    bool result = solution.isPalindrome(target); // 함수 호출
    cout <<  result << endl;

    return 0;
}