#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low++], nums[mid++]);
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution solution; // Solution 클래스 객체 생성
    solution.sortColors(nums); // 함수 호출
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}