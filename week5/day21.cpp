#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <algorithm>


using namespace std;

main (){
    vector<int> vec = {1,2,3,4,5};
    cout << "vector = {1,2,3,4,5} = " ;
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
        if(vec[i] != int(vec.size())){
            cout << ",";
        }
    }
    cout<< endl;

    list<int> lis = {6,7,8,9,10};
    cout << "lis = {6,7,8,9,10} = " ;
    for (auto i = lis.begin(); i != lis.end(); ++i)
    {
        cout << *i;
        if(next(i) != lis.end()){
            cout << ",";
        }
    }
    cout<< endl;

    deque<int> deq = {11,12,13,14,15};
    cout << "deq = {11,12,13,14,15} = " ;
    deq.push_back(16);
    deq.pop_front();
    for (auto i = deq.begin(); i != deq.end(); ++i)
    {
        cout << *i;
        if(next(i) != deq.end()){
            cout << ",";
        }
    }
    cout<< endl;

    set<int> set= {17, 18, 18, 20, 19};
    cout << "set = {17, 18, 18, 20, 19} = ";
    for (auto it = set.begin(); it != set.end(); ++it) { 
        cout << *it;
        if (next(it) != set.end()) { 
            cout << ", ";
        }
    }
    cout<< endl;
    cout<<"키와 밸류 ";
    multimap<string, string> map = {{"cat", "rommy"}, {"cat", "sammy"}};
    for (const auto& pair : map){
        cout << pair.first << " > " <<pair.second<< endl;
    }

    vector sortInt = {3,5,6,87,1,2,4,55};
    cout << "sortInt = ";
    for (size_t i = 0; i < sortInt.size(); i++)
    {
        cout << sortInt[i];
        if (i != sortInt.size() - 1) {
            cout << ", ";
        }
    }
    cout<<endl;
    sort(sortInt.begin(), sortInt.end());
    cout << "sort(sortInt.begin(), sortInt.end())"<<endl;
     cout << "sortInt = ";
    for (size_t i = 0; i < sortInt.size(); i++)
    {
        cout << sortInt[i];
        if (i != sortInt.size() - 1) { 
            cout << ", ";
        }
    }
    cout<<endl;

    
    auto it = find(sortInt.begin(), sortInt.end(), 3);
        if (it != sortInt.end()) {
            cout << "3이 위치한 인덱스는 " << distance(sortInt.begin(), it) << endl;
        } else {
            cout << "3 없음" << endl;
        }

    return 0;
}