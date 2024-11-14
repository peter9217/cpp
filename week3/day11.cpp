#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[5];
    int arrC[] = {1,2,3,4,5};
    string arrS[]= {"asdfg", "asdd"};
    cout << arr[0];
    cout << arrC[0];
    cout << arrS[0]<<endl;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        cout << i ;
        cout << arr[i] << endl;
    }

    int matrix[3][4] = {{2,3,4,5},{7,8,9,10},{11,12,13,14}};
    cout << matrix[2][0]<<endl;

    vector<int> vec;  // 빈 벡터
    vector<int> vec2(5);  // 0으로 초기화된 5의 크기를 가진 벡터
    vector<int> vec3(5, 10); // 10으로 초기화된 5의 크기 벡터
    vector<int> vec4 = {1,2,3};  // 초기값을 주어 선언

    for (int i = 0; i < vec.size(); i++) {
        cout<<"------";
        cout << vec[i] << " ";
        cout<<"------";
    }
    cout<<vec2[1]<<endl;
    cout<<vec3[1]<<endl;
    cout<<vec4[1]<<endl;
    vec2.push_back(6);
    cout<<"----------------------";
    cout<<vec2[4]<<endl;
    try
    {
        cout<<vec2.at(8)<<endl;
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    
    cout<<"----------------------";

    return 0;
}