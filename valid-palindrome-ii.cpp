//https://leetcode.com/problems/valid-palindrome-ii


// class Solution {
// public:
//     bool ispalindrome(string s, int i, int j){
//         while(i < j){
//             if(s.at(i) == s.at(j)){
//                 i++;
//                 j--;
//             }else return false;
//         }
//         return true;
//     }
//     bool validPalindrome(string s) {
//         int i  = 0;
//         int j = s.size()-1;
//         while(i < j){
//             if(s.at(i) == s.at(j)){
//                 i++;
//                 j--;
//             }else{
//                 return ispalindrome(s, i+1, j) || ispalindrome(s, i, j-1);
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int n=s.length();
        int j=n-1;
        int count=0,count1=0;
            while(i<=j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else{
                    i++;
                    count++;
                }
            }
         i=0;
         j=n-1;
            while(i<=j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else{
                    j--;
                    count1++;
                }
            } 
        if(count==0 || count1==0){
            return true;
        }
        if(count==1 || count1==1){
            return true;
        }
        return false;
    }
};
