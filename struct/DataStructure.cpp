#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <unordered_map>
#include <set>

using namespace std;
struct Node{
    string data;
    Node* next;
};

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout <<"arr[2] = " << arr[2]<<endl;


    vector<int> v = {1, 2, 3};
    v.push_back(4);
    cout << "v[3] = "<<v[3]<<endl;


    Node* a = new Node{"1", nullptr};
    Node* b = new Node{"2", nullptr};
    Node* c = new Node{"3", nullptr};
    a->next = b;
    b->next = c;
    cout <<"first->next->next->data = "<< a->next->next->data<<endl;


    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"s.top() = "<<s.top()<<endl;


    queue<int> q;
    q.push(1);
    q.push(2);
    cout <<"q.front() = "<< q.front()<<endl; // 출력: 1
    q.pop();

    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    cout <<"dq.front() = "<< dq.front();
    cout <<", dq.back() = "<< dq.back()<<endl;

    unordered_map<string, int> umap;
    umap["apple"] = 2;  
    cout <<"umap[apple] = "<< umap["apple"]<<endl;

    vector<int> adj[5];
    adj[0].push_back(1);
    adj[1].push_back(2);
    cout << "adj[0] = ";
    for (int i : adj[0]) {
        cout << i << " "<<endl;
    }

    set<int> se;
    se.insert(3);
    se.insert(1);
    cout <<"se.begin() = "<< *se.begin();

    return 0;
}