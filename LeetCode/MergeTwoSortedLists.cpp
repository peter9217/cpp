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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        multiset<int> tree;

        while (list1 != nullptr) {
            tree.insert(list1->val);
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            tree.insert(list2->val);
            list2 = list2->next;
        }


        ListNode* dummy = new ListNode(); 
        ListNode* current = dummy;

        for (int val : tree) {
            current->next = new ListNode(val);
            current = current->next;
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
    ListNode* result = solution.mergeTwoLists(target, target2); // 함수 호출
    
    // Print merged list
    printList(result);
    return 0;
}