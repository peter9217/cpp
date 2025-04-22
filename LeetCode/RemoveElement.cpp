#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0; 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int val = 2;
    int newLength = removeElement(nums, val);
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] ;
    }
    cout << endl;
    return 0;
}
