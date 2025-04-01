#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
        string multiply(string num1, string num2) {
            if (num1 == "0" || num2 == "0") return "0"; 
    
            int n = num1.size(), m = num2.size();
            vector<int> result(n + m, 0);
    
            // 곱셈 연산 수행
            for (int i = n - 1; i >= 0; i--) {
                for (int j = m - 1; j >= 0; j--) {
                    int mul = (num1[i] - '0') * (num2[j] - '0');
                    int sum = mul + result[i + j + 1]; 
    
                    result[i + j + 1] = sum % 10; 
                    result[i + j] += sum / 10;   
                }
            }
            string res = "";
            for (int num : result) {
                if (!(res.empty() && num == 0)) res += to_string(num); 
            }
    
            return res.empty() ? "0" : res;
        }
    };
    

int main() {
    
    string target1 = "7";
    string target2 = "7";

    Solution solution; // Solution 클래스 객체 생성
    string result = solution.multiply(target1,target2); // 함수 호출
    cout <<  result << endl;

    return 0;
}