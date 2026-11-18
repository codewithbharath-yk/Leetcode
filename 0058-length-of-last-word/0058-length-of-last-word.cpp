class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int length = 0;

        // 1. Skip trailing spaces at the end of the string
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // 2. Count the characters of the last word until we hit another space or the start
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};