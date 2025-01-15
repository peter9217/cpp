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
    int lengthOfLongestSubstring(string s) {
        set<char> se; 
        int n = 0; 
        int r = 0; 
        int l = 0;

        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            while (se.count(a)) {
                se.erase(s[l]); 
                l++;       
            }
            se.insert(a); 
            n = i-l+1;  
            r = max(r, n);
        }

        return r;
    }
};

int main() {
    
    string target = "asdddd";
    Solution solution; // Solution 클래스 객체 생성
    int result = solution.lengthOfLongestSubstring(target); // 함수 호출
    
    // Print merged list
    cout<<result;
    return 0;
}