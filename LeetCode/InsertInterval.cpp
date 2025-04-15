#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        bool inserted = false;
    
        for (auto& interval : intervals) {
            if (interval[1] < newInterval[0]) {
                result.push_back(interval);
            } 
            else if (interval[0] > newInterval[1]) {
                if (!inserted) {
                    result.push_back(newInterval);
                    inserted = true;
                }
                result.push_back(interval);
            } 
            else {
                newInterval[0] = min(newInterval[0], interval[0]);
                newInterval[1] = max(newInterval[1], interval[1]);
            }
        }
        if (!inserted) {
            result.push_back(newInterval);
        }
        return result;
    }
    };
    
int main() {
    Solution solution;
    vector<vector<int>> nums1 = {{1, 2},{5,7},{8, 9}};
    vector<int> nums2 = {2, 6};
    vector<vector<int>> result = solution.insert(nums1,nums2);

    for (auto& perm : result) {
        cout << "[";
        for (int num : perm) cout << num << " ";
        cout << "]\n";
    }
    return 0;
}