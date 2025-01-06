#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<string> cave;
        if(s.size()%2!=0){return false;}
        for(int i=0; i<s.size(); i++){
            string key(1, s[i]);
            if(key=="("||key=="{"||key=="["){
                cave.push(key);
            }else{
                if(cave.empty()) return false;
                string top=cave.top();
                if((top=="("&&key!=")")||(top=="{"&&key!="}")||(top=="["&&key!="]")){
                    return false;
                }else{
                    cave.pop();
                }
            }
            // if(i%2==1&&(key==")"||key=="}"||key=="]")){return false;}
            // if(key==")"||key=="}"||key=="]") continue;
            // string keyset(1, s[i+1]);
            // string keytool(1, s[s.size()-1-i]);
            // if((key=="("&&(keytool==")"||keyset==")"))||(key=="{"&&(keytool=="}"||keyset=="}"))||(key=="["&&(keytool=="]"||keyset=="]"))){
            // }else{
            //     return false;
            // }
        }
        if(!cave.empty()) return false;
        return true;
    }
};

int main() {
    
    string target = "({{}})";

    Solution solution; // Solution 클래스 객체 생성
    bool result = solution.isValid(target); // 함수 호출
    cout <<  result << endl;

    return 0;
}