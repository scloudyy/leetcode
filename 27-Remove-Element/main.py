class Solution(object):
    def removeElement01(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        start, end = 0, len(nums) - 1
        while start <= end:
            if nums[start] == val:
                nums[start], nums[end], end = nums[end], nums[start], end - 1 ## 元组的打包与解包
            else:
                start += 1
        return start

    def removeElement02(self, nums, val):
        i = 0
        for x in nums:
            if x != val:
                nums[i] = x
                i += 1
        return i

    def output(self, nums, size):
        print(nums[0:size])

if __name__ == '__main__':
    lst = [1, 2, 3, 4, 5]
    sln = Solution()

    size = sln.removeElement01(lst, 5)
    sln.output(lst, size)

    size = sln.removeElement02(lst, 5)
    sln.output(lst, size)
