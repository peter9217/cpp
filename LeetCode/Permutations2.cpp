#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        vector<vector<int>> permuteUnique(vector<int>& nums) {
            vector<vector<int>> result;
            vector<int> perm;
            vector<bool> used(nums.size(), false);
            
            // 중복 제거를 위해 정렬
            sort(nums.begin(), nums.end());
            
            backtrack(nums, perm, used, result);
            return result;
        }
    
    private:
        void backtrack(vector<int>& nums, vector<int>& perm, vector<bool>& used, vector<vector<int>>& result) {
            if (perm.size() == nums.size()) {
                result.push_back(perm);
                return;
            }
            
            for (int i = 0; i < nums.size(); i++) {
                // 이미 사용한 숫자는 건너뜀
                if (used[i]) continue;
                
                // 중복 제거: 이전과 같은 숫자인데 앞 숫자가 사용되지 않았다면 건너뜀
                if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;
                
                // 숫자 선택
                used[i] = true;
                perm.push_back(nums[i]);
                
                // 다음 단계 백트래킹
                backtrack(nums, perm, used, result);
                
                // 백트래킹: 원래 상태로 되돌림
                used[i] = false;
                perm.pop_back();
            }
        }
    };
    
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.permuteUnique(nums);

    for (auto& perm : result) {
        cout << "[";
        for (int num : perm) cout << num << " ";
        cout << "]\n";
    }
    return 0;
}