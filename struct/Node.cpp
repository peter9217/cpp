#include <iostream>

using namespace std;
#include <string>

int main(){
    struct Node{
        string data;
        Node* next;
    ~Node() {
        cout << "메모리 해제됨: " << data << endl;
    }
    };

    Node* first = new Node{"로미", nullptr};
    Node* second = new Node{"새미", nullptr};
    Node* third = new Node{"방주", nullptr};

    first->next = second;
    second->next = third;

    cout <<"first->next->next->data = "<< first->next->next->data<<endl;
    delete first;
    delete second;
    delete third;


    return 0;
}