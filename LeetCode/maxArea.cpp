#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l= 0 ,r= height.size()-1;
        int width =0;
        int result = 0;
        while(l<r){
            width = r - l;
            result = max(min(height[r],height[l])*width,result);
            if(height[r]<height[l]){
                r--;
            }else{
                l++;
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15, 24, 23, 66, 2, 3, 4,5,6}; // 초기화된 벡터

    Solution solution; // Solution 클래스 객체 생성
    int result = solution.maxArea(nums); // 함수 호출
    cout << result<< endl;

    return 0;
}