#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap;
        for(int i=0; i<nums.size(); i++){

            // for(int j=i+1; j<nums.size(); j++){
            //     if(nums[i]+nums[j]==target){
            //         return {i,j};
            //     };
            // };
            if(numMap.count(target-nums[i])){
                return {numMap[target-nums[i]], i};
            }    
            numMap[nums[i]]=i;
        };
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15}; // 초기화된 벡터
    int target = 9;

    Solution solution; // Solution 클래스 객체 생성
    vector<int> result = solution.twoSum(nums, target); // 함수 호출
    cout << "인덱스: " << result[0] << ", " << result[1] << endl;

    return 0;
}