class Solution(object):
    def romanToInt(self, s):
        \\\
        :type s: str
        :rtype: int
        \\\
        #Initialize dict of all roman numerals and their numeric value.
        romans = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }

        answer = 0
        \\\
        Iterate through the list of roman numerals, subtracting from the total if were
        Not on the last number and the current numeral is less than the next.
        Otherwise add the value of the numeral to the answer
        This gives us a O(n) time complexity.
        \\\
        for i in range(len(s)):
            if i < len(s)-1 and romans[s[i]] < romans[s[i+1]]:
                answer -= romans[s[i]]
            else:
                answer += romans[s[i]]
        
        return answer