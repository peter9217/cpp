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
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closest = nums[0] + nums[1] + nums[2];
    
    for (int i = 0; i < nums.size() - 2; ++i) {
        int left = i + 1, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (abs(sum - target) < abs(closest - target)) {
                closest = sum;
            }

            if (sum < target) left++;
            else if (sum > target) right--;
            else return sum; 
        }
    }
    return closest;
}
};

int main() {
    vector<int> target = {1, 0, 0, 0, 4, 2, -4};
    int targetSum = 3;  // 원하는 목표값 설정
    Solution solution;
    int result = solution.threeSumClosest(target, targetSum);

    cout << result << endl;
    return 0;
}