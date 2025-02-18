#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <stack>
#include <set>

using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
    public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);  
        ListNode* prev = dummy; 

        while (prev->next != nullptr && prev->next->next != nullptr) {
            ListNode* first = prev->next;       
            ListNode* second = prev->next->next;
            
           
            first->next = second->next;  
            second->next = first;        
            prev->next = second;         

            
            prev = first;
        }

        return dummy->next; 
    }
};
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    ListNode* target = new ListNode(1);
    target->next = new ListNode(3);
    target->next->next = new ListNode(4);
    target->next->next->next = new ListNode(5);


    Solution solution; // Solution 클래스 객체 생성
    ListNode* result = solution.swapPairs(target); // 함수 호출
    
    // Print merged list
    printList(result);
    return 0;
}