#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int divide(int dividend, int divisor) {
            if (dividend == INT_MIN && divisor == -1) {
                return INT_MAX;
            }
            return dividend / divisor;
        }
    };

int main() {
    
    int target = 12356;
    int target2 = 12356;

    Solution solution; // Solution 클래스 객체 생성
    int result = solution.divide(target,target2); // 함수 호출
    cout <<  result << endl;

    return 0;
}