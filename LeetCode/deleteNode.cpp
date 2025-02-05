#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Helper function to create a new node
ListNode* createNode(int val) {
    return new ListNode(val);
}

int main() {
    // Create a simple linked list: 4 -> 5 -> 1 -> 9
    ListNode* head = createNode(4);
    head->next = createNode(5);
    head->next->next = createNode(1);
    head->next->next->next = createNode(9);
    
    cout << "Original list: ";
    printList(head);
    
    // Create a solution object and call deleteNode on the second node (5)
    Solution sol;
    sol.deleteNode(head->next);  // Deleting node with value 5
    
    cout << "List after deleting node with value 5: ";
    printList(head);
    
    return 0;
}
