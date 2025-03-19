#include <iostream>
#include <vector>

using namespace std;

void backtrack(string s, int open, int close, int n, vector<string> &result) {
    if (s.length() == 2 * n) {  // 괄호 문자열 완성
        result.push_back(s);
        return;
    }

    if (open < n) {  // 여는 괄호 추가 가능
        backtrack(s + "(", open + 1, close, n, result);
    }

    if (close < open) {  // 닫는 괄호 추가 가능
        backtrack(s + ")", open, close + 1, n, result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    backtrack("", 0, 0, n, result);
    return result;
}

int main() {
    int n = 3;
    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
