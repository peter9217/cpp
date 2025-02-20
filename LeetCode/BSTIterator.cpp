#include <stack>

using namespace std;

// TreeNode 구조체 정의
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BSTIterator {
private:
    stack<TreeNode*> st;

    // 왼쪽 서브트리의 모든 노드를 스택에 저장
    void pushLeftNodes(TreeNode* node) {
        while (node) {
            st.push(node);
            node = node->left;
        }
    }

public:
    // 생성자: 루트 노드를 받아서 초기화
    BSTIterator(TreeNode* root) {
        pushLeftNodes(root);
    }

    // 다음 값을 반환하고, 스택을 업데이트
    int next() {
        TreeNode* topNode = st.top();
        st.pop();

        // 오른쪽 서브트리가 있다면 스택에 추가
        if (topNode->right) {
            pushLeftNodes(topNode->right);
        }

        return topNode->val;
    }

    // 다음 값이 있는지 확인
    bool hasNext() {
        return !st.empty();
    }
};
