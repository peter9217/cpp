#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
    
        for (auto& s : strs) {
            string key = s;
            sort(key.begin(), key.end());  
            mp[key].push_back(s);          
        }
    
        vector<vector<string>> result;
        for (auto& [k, v] : mp) {
            result.push_back(v);
        }
    
        return result;
    }
};
    

int main() {
    vector<string> target1 = {"eat","tea","tan","ate","nat","bat"};

    Solution solution; // Solution 클래스 객체 생성
    vector<vector<string>> result = solution.groupAnagrams(target1); // 함수 호출
    for (const auto& group : result) {
        cout << "[ ";
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}