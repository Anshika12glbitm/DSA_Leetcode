class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        vector<int> count(26);//stores the frequency of the letters 

        for(char c:s)
        {
            count[c-'a']++;//increases the frequency of letters 
        }

        for(char c :t)
        {
            count[c-'a']--;
        }

        for(int freq:count)
        {
            if(freq!=0)
            return false;
        }

        return true;
    }
};