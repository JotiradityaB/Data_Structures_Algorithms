//https://leetcode.com/problems/split-a-string-in-balanced-strings


class Solution {
public:
    int balancedStringSplit(string s) {
        int cr=0,cl=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='R')
                cr++;
            if(s.at(i)=='L')
                cl++;
            if(cr==cl)
                ans++;
        }
        return ans;
    }
};
