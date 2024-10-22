class Solution(object):
    def isSubsequence(self, s, t):
        \\\
        :type s: str
        :type t: str
        :rtype: bool
        \\\
        # Edge cases
        if not s: return True
        if s == t: return True
        \\\
        Iterate through the string, checking each letter of the substring is present,
        If all the numbers are found, we would have iterated through all of the substring
        then j would be >= the len(s) therefore we found all of our substring and in order.
        This gives us a O(n) solution, where N is the length of the string t.
        \\\
        i = 0
        j = 0
        while i < len(s) and j < len(t):
            if s[i] == t[j]:
                i += 1
            j+=1
        
        if i >= len(s):
            return True
        else:
            return False