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
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        vector<vector<int>> dummy = matrix;  
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                matrix[i][j] = dummy[size - j - 1][i];
            }
        }
    }
};

int main() {
    
    vector<vector<int>> target = {{1, 2, 4},{3,4,5},{5,6,7}};
    Solution solution; // Solution 클래스 객체 생성
    solution.rotate(target); // 함수 호출
    
    // 회전된 행렬 출력
    cout << "Rotated matrix:" << endl;
    for (const auto& row : target) {
        cout << "[";
        for (int num : row) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}