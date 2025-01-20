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
    int reverse(int x) {
        int result= 0;
        while(x!=0){
            if (result > INT_MAX / 10 || (result==INT_MAX / 10 && x%10 > INT_MAX%10)) {
                return 0;  
            }
            if (result < INT_MIN / 10 || (result==INT_MIN / 10 && x%10 < INT_MIN%10)) {
                return 0;  
            }
            result = result*10+x%10;
            x /= 10;
        }
        return result;
    }
};



int main() {
    int target = 23457788;
    Solution solution; // Solution 클래스 객체 생성
    int result = solution.reverse(target); // 함수 호출
    
    // Print merged list
    cout<<result;
    return 0;
}