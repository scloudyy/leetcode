#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates01(vector<int>& nums) {
        if (nums.size() <= 2) {  // 首先要考虑极限条件
            return nums.size();
        }
        int index = 1;
        for (int i = 2; i < nums.size(); i++) {
            if ((nums[index - 1] != nums[index]) || 
            (nums[index - 1] == nums[index] && nums[index] != nums[i])) { // 按照守望者分两种情况，当前守望者和前一代守望者相同或不同
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }

    void testcase(vector<int>& nums) {
        int arr[6] = {1,1,1,2,2,3};
        vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
        nums.swap(vec);
    }

    void output(vector<int>& nums, int size) {
        for (int i = 0; i < size; i++) {
            cout << nums[i] << " ";
        }
        cout << endl << "size: " << size << endl;
    }
};

int main() {
    vector<int> vec;
    int size;

    Solution* sln = new Solution();

    sln->testcase(vec);
    size = sln->removeDuplicates01(vec);
    sln->output(vec, size);
}
