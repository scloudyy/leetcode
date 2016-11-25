class Solution(object):
    def removeElement(self, nums, val):
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

    def output(self, nums, size):
        for i in range(0, size):
            print(nums[i])


if __name__ == '__main__':
    lst = [1, 2, 3, 4, 5]
    sln = Solution()
    size = sln.removeElement(lst, 5)
    sln.output(lst, size)
