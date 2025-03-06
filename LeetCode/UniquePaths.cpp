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
    long long comb(int n, int r) {
        if (r > n - r) r = n - r; 
        long long res = 1;
    
        for (int i = 0; i < r; i++) {
            res = res * (n - i) / (i + 1); 
        }
    
        return res;
    }
    
    int uniquePaths(int m, int n) {
        return comb(m + n - 2, m - 1);
    }
};

int main() {
    int target = 4;
    int target2 = 5;
    Solution solution; // Solution 클래스 객체 생성
    int result = solution.uniquePaths(target, target2); // 함수 호출
    
    // Print merged list
    cout<<result;
    return 0;
}