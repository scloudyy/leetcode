class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0:
            return 0
        index = 1
        val = nums[0]
        for i in nums[1:]:
            if val == i:
                continue
            else:
                val = nums[index] = i
                index += 1
        return index

    def output(self, nums, size):
        print(nums[:size])

if __name__ == '__main__':
    nums = [1]
    sln = Solution()

    size = sln.removeDuplicates(nums)
    sln.output(nums, size)
