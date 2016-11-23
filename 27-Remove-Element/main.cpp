#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
	int removeElement(vector<int> &nums, int val) {
		vector<int>::iterator it;
		for(it = nums.begin(); it != nums.end();) {
			if (*it == val)
				it = nums.erase(it);
			else
				it++;
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
		for(i; i < nums.size(); i++) {
			cout << nums[i] << " ";
		}
		cout << endl << "size: " << size;
	}
};

int main() {
	vector<int> vec;
	int size;

	Solution* slt = new Solution();

	vec = slt->testcase();
	size = slt->removeElement(vec, 3);
	slt->output(vec, size);

	delete slt;
}