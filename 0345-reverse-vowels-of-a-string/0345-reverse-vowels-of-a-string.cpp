class Solution {
public:
    bool isVowel(char c)
    {
        return c=='a'  || c=='e' || c=='o' || c=='i' || c=='u' || c=='A' || c=='E' || c=='O' || c=='U' || c=='I';
    }

    string reverseVowels(string s) {
        int left = 0 ;
        int right = s.length()-1;

        while(left<right)
        {
            while(left<right && !isVowel(s[left]))
            {
                left++;
            }

            while(left<right  && !isVowel(s[right]))
            {
                right--;
            }

            swap(s[left], s[right]);

            left++;
            right--;
        }

        return s;
    }
};