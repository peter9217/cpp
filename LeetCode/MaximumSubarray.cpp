#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int current_sum = nums[0];
            int max_sum = nums[0];
    
            for (int i = 1; i < nums.size(); i++) {
                current_sum = max(nums[i], current_sum + nums[i]);
                max_sum = max(max_sum, current_sum);
            }
    
            return max_sum;
        }
    };

int main() {
    vector<int> nums = {2, 0, 2, -5, 1, 1, 0};

    Solution solution; // Solution 클래스 객체 생성
    int num=solution.maxSubArray(nums); // 함수 호출
    cout << num << " ";
    cout << endl;

    return 0;
}