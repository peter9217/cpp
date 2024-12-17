#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int data;
    vector<Node*> children;

    Node(int value) : data(value){}
};
void preorderTraversal(Node* root){
    if (root == nullptr) return;

    cout << root ->data <<""; // 현재 노드 처리
    for (Node* child : root->children){
        preorderTraversal(child);
    }
}
int main() {
        // 트리 생성
    Node* root = new Node(1);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(3));
    root->children[0]->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(5));

    // 트리 출력 (전위 순회)
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;





    return 0;
}