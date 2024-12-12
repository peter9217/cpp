#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    
    queue<string> que;
    que.push("first");
    que.push("second");
    que.push("third");
    que.push("last");

    cout<<"que.fornt() = "<<que.front()<<endl; // 큐 맨 앞
    cout<<"que.back() = "<<que.back()<<endl; // 큐 맨 뒤
    que.pop(); // 큐 삭제
    cout<<"que.pop()"<<endl;
    cout<<"que.fornt() = "<<que.front()<<endl;

    while (!que.empty()) { // 큐 데이터 전부 삭제
        cout << "Removing: " << que.front() << endl;
        que.pop();
    }
    cout<<"que.fornt() = "<<que.front()<<endl; 

    return 0;
}