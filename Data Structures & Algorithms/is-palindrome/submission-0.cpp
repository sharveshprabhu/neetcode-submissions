class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.size()-1;
        bool flag = true;

        for(int i=0;i<s.size() && i<l;i++){
            while(i<l && !isalnum(s[i]))i++;
            while(i<l && !isalnum(s[l]))l--;
            if(i<l && toupper(s[i])!=toupper(s[l]))flag = false;
            l--;
        }
        return flag;
    }
};
