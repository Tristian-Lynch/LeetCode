class Solution(object):
    def findClosestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        closest = nums[0]
        for i in range(1,len(nums)):
            if abs(nums[i]) == abs(closest):
                closest = max(closest,nums[i])
                continue
            if abs(nums[i]) < abs(closest):
                closest = nums[i]
        return closest   