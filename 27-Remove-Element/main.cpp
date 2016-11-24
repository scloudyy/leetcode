#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
	public:
	int removeElement01(vector<int>& nums, int val) {
		// 使用迭代器
		vector<int>::iterator it;
		for(it = nums.begin(); it != nums.end();) {
			if (*it == val)
				it = nums.erase(it);
			else
				it++;
		}
		return nums.size();
	}

	int removeElement02(vector<int>& nums, int val) {
		// 使用数组的方式
		int index = 0;
		for (int i = 0; i < nums.size(); ++i)
			if (nums[i] != val)
				nums[index++] = nums[i];
		return index;
	}

	int removeElement03(vector<int>& nums, int val) {
		// 使用STL
		auto iter = nums.end();
    while((iter = find(nums.begin(), nums.end(), val)) != nums.end())
        {
            nums.erase(iter);
        }
    return nums.size();
	}

	vector<int> testcase() {
		int arr[6] = {1, 2, 3, 4, 5, 6};
		vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
		return vec;
	}

	void output(const vector<int> &nums, int size) {
		int i = 0;
		for(i; i < size; i++) {
			cout << nums[i] << " ";
		}
		cout << endl << "size: " << size << endl;
	}
};

int main() {
	vector<int> vec;
	int size;

	Solution* slt = new Solution();

	vec = slt->testcase();
	size = slt->removeElement01(vec, 3);
	slt->output(vec, size);

	vec = slt->testcase();
	size = slt->removeElement02(vec, 3);
	slt->output(vec, size);

	vec = slt->testcase();
	size = slt->removeElement03(vec, 3);
	slt->output(vec, size);

	delete slt;
}