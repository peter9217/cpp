#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    priority_queue<int> maxHeap;
    maxHeap.push(12);
    cout << "maxHeap의 가장 높은 수 = "<<maxHeap.top()<<endl;
    maxHeap.push(32);
    cout << "maxHeap의 가장 높은 수 = "<<maxHeap.top()<<endl;
    maxHeap.push(62);
    cout << "maxHeap의 가장 높은 수 = "<<maxHeap.top()<<endl;
    maxHeap.push(2);
    cout << "maxHeap의 가장 높은 수 = "<<maxHeap.top()<<endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(12);
    cout << "minHeap의 가장 작은 수 = "<<minHeap.top()<<endl;
    minHeap.push(32);
    cout << "minHeap의 가장 작은 수 = "<<minHeap.top()<<endl;
    minHeap.push(62);
    cout << "minHeap의 가장 작은 수 = "<<minHeap.top()<<endl;
    minHeap.push(2);
    cout << "minHeap의 가장 작은 수 = "<<minHeap.top()<<endl;

    return 0;
}