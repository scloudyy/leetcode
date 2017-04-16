#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates01(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums.size();
        }
        int index = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[index] != nums[i]) {
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }

    void testcase(vector<int>& nums) {
        int arr[4] = {1, 1, 2, 2};
        vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
        nums.swap(vec);
    }

    void output(const vector<int>& nums, int size) {
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
