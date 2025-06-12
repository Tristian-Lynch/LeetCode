class Solution {
public:
    int romanToInt(string s) {
        int total = { 0 };
        for (int i = 0; i < s.size(); i++)
        {
            std::cout << total << std::endl;
            switch (s[i])
            {
                case 'I':
                if (s[i+1] == 'V')
                {
                    total += 4;
                    i++;
                    continue;
                } 
                else if (s[i+1] == 'X')
                {
                    total += 9;
                    i++;
                    continue;
                } 
                else 
                {
                    total += 1;
                    continue;
                }
                case 'X':
                if (s[i+1] == 'L')
                {
                    total += 40;
                    i++;
                    continue;
                } 
                else if (s[i+1] == 'C')
                {
                    total += 90;
                    i++;
                    continue;
                } 
                else 
                {
                    total += 10;
                    continue;
                }
                case 'C':
                if (s[i+1] == 'D')
                {
                    total += 400;
                    i++;
                    continue;
                } 
                else if (s[i+1] == 'M')
                {
                    total += 900;
                    i++;
                    continue;
                } 
                else 
                {
                    total += 100;
                    continue;
                }
                default:
                if (s[i] == 'V') { total += 5; continue; }
                if (s[i] == 'L') { total += 50; continue; }
                if (s[i] == 'D') { total += 500; continue; }
                if (s[i] == 'M') { total += 1000; continue; }

            }
        }
        return total;
    }
};