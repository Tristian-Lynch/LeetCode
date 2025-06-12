#include <string>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newWord = "";

        if (word1.size() <= word2.size())
        {
            for (int i = 0; i < word1.size(); i++)
            {
                newWord += word1[i];
                newWord += word2[i];
            }

            newWord += word2.substr(word1.size());
        }
        else if (word1.size() > word2.size())
        {
            for (int i = 0; i < word2.size(); i++)
            {
                newWord += word1[i];
                newWord += word2[i];
            }

            newWord += word1.substr(word2.size());
        }
        return newWord;
    }
};