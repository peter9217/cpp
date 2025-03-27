#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
        string countAndSay(int n) {
            string result = "1"; 
    
            for (int i = 1; i < n; i++) { 
                string temp = "";
                int count = 1;
                
               
                for (int j = 1; j < result.size(); j++) {
                    if (result[j] == result[j - 1]) {
                        count++; 
                    } else {
                        temp += to_string(count) + result[j - 1]; 
                         
                    }
                }
                temp += to_string(count) + result.back();
                result = temp; 
            }
            return result;
        }
    };

int main() {
    
    int target = 7;

    Solution solution; // Solution 클래스 객체 생성
    string result = solution.countAndSay(target); // 함수 호출
    cout <<  result << endl;

    return 0;
}