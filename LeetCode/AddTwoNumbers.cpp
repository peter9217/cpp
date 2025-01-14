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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(); // 더미 헤드 노드

        ListNode* l3 = dummy; 
        int sum = 0;
        int p= 0;
        while(l1 != nullptr || l2 != nullptr){
            sum=p;
            p=0;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            if(sum>9){
                p=sum/10;
            }
            sum=sum%10;
            
            l3->next = new ListNode(sum);
            l3=l3->next;
            sum=0;
        }
        if(p>0){
            l3->next = new ListNode(p);
            l3=l3->next; 
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

    // Create the second linked list: 1 -> 2 -> 4 -> 7
    ListNode* target2 = new ListNode(1);
    target2->next = new ListNode(2);
    target2->next->next = new ListNode(4);
    target2->next->next->next = new ListNode(7);

    Solution solution; // Solution 클래스 객체 생성
    ListNode* result = solution.addTwoNumbers(target, target2); // 함수 호출
    
    // Print merged list
    printList(result);
    return 0;
}