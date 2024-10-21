class Solution(object):
    def findClosestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        
        The solution below gives us a time complexity of O(n).
        For each item in the array we check to see if the abs()
        of the current number and our current closest are equal
        to catch an edge case of returning whichever value is greater
        in this case.
        Then if we do not encounter this edge case we just check to see if 
        the absolute value of the current is less than or equal to the 
        current closest. 
        Returning our final closest value at the end.
        """
        closest = nums[0]
        for i in range(1,len(nums)):
            if abs(nums[i]) == abs(closest):
                closest = max(closest,nums[i])
                continue
            if abs(nums[i]) < abs(closest):
                closest = nums[i]
        return closest   