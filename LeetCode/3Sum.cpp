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
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;  
                    while (left < right && nums[right] == nums[right - 1]) right--; 
                    left++; 
                    right--;
                } 
                else if (sum < 0) left++;
                else right--;
            }
        }
        return result;
    }
};

int main() {
    
    vector<int> target = {1, 0, 0, 0, 4, 2, -4};
    Solution solution; // Solution 클래스 객체 생성
    vector<vector<int>> result = solution.threeSum(target); // 함수 호출
    
    // Print merged list
    for (const auto& triplet : result) {
    cout << "[";
    for (int num : triplet) {
        cout << num << " ";
    }
    cout << "]\n";
}
    return 0;
}