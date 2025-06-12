#include <string>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // where we will store our new word as its created.
        string newWord = "";

        // two cases, one where the length of word1 is less than or equal to, and when word1 is greater than word2.
        if (word1.size() <= word2.size())
        {
            // if word1 <= word2 size, then we iterate the length of word1 
            for (int i = 0; i < word1.size(); i++)
            {
                newWord += word1[i];
                newWord += word2[i];
            }
            // and then append the rest of word two after all letters from word1 have been used.
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

        // finally return our new word.
        return newWord;
    }
};

// Good Time Complexity, O(M+N)
// Variables werent edited in place so there is a space complexity of also O(M+N)

// I could instead modify one of the existing variables in place adding a letter in every other spot from the other string.