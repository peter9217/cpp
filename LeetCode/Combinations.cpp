#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> com;
        backtrack(1, n, k, com, result);
        return result;
    }

private:
    void backtrack(int start, int n, int k, vector<int>& com, vector<vector<int>>& result) {
        if (com.size() == k) {
            result.push_back(com);
            return;
        }
        for (int i = start; i <= n; i++) {
            com.push_back(i);
            backtrack(i + 1, n, k, com, result);
            com.pop_back();
        }
    }
};

int main() {
    Solution solution; // 객체 생성
    vector<vector<int>> result = solution.combine(6, 3); // 올바른 호출

    // 2D 벡터 출력
    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
