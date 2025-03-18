#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0; // 도달 가능한 최대 인덱스
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) return false; // 현재 위치 i가 maxReach를 넘어가면 도달할 수 없으므로 false
            maxReach = max(maxReach, i + nums[i]); // 현재 위치에서 갈 수 있는 최대 거리 갱신
        }
        return true;
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15, 24, 23, 66, 2, 3, 4,5,6}; // 초기화된 벡터

    Solution solution; // Solution 클래스 객체 생성
    int result = solution.canJump(nums); // 함수 호출
    cout << result<< endl;

    return 0;
}