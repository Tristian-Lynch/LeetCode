class Solution {
public:
    int minMaxDifference(int num) {
        std::string stringNum = std::to_string(num);

        char firstNonNine{ findFirstNonInt(stringNum, '9') };

        int max{ makeMax(stringNum, firstNonNine) };
        int min{ makeMin(stringNum) };

        return max-min;
    }

    char findFirstNonInt(std::string num, char INT)
    {
        for (int i{0}; i < num.size(); i++)
        {
            if (num[i] != INT)
            {
                return num[i];
            }
        }

        return NULL;
    }

    int makeMax(std::string num, char firstNonNine)
    {
        if(firstNonNine == -1)
        {
            return std::stoi(num);
        }

        for(int i{0}; i < num.size(); i++)
        {
            if(num[i] == firstNonNine)
            {
                num[i] = '9';
            }
        }

        return std::stoi(num);
    }

    int makeMin(std::string num)
    {
        char startingChar{ num[0] };

        num[0] = '0';

        for(int i{1}; i < num.size(); i++)
        {
            if(num[i] == startingChar)
            {
                num[i] = '0';
            }
        }

        return std::stoi(num);
    }
};