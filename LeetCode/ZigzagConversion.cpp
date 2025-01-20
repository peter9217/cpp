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
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        string r= "";
        vector<string> set(numRows);
        int i=-1;
        bool flag = true;
        for(int n=0; n<s.size(); n++){
            if(flag==true)i++; else i--;
            set[i]= set[i]+s[n];
            if (i == numRows - 1) flag=false;
            else if (i ==  0) flag=true;
        };
        for(string f:set)r=r+f;
        return r;
    }
};

int main() {
    string target = "vreahufsdbnoilkgdf";
    int target2 = 5;
    Solution solution; // Solution 클래스 객체 생성
    string result = solution.convert(target, target2); // 함수 호출
    
    // Print merged list
    cout<<result;
    return 0;
}