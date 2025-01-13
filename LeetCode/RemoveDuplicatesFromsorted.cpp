#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums[0];
        for(int n=1; n<nums.size(); n++){
            if(l==nums[n]){
                nums.erase(nums.begin() +n);
                n--;
            }else {
                l = nums[n]; 
            }
        };

        return nums.size();
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3}; // 초기화된 벡터

    Solution solution; // Solution 클래스 객체 생성
    int result = solution.removeDuplicates(nums); // 함수 호출
    cout << "result: " << result << endl;

    return 0;
}