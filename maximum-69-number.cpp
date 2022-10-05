//https://leetcode.com/problems/maximum-69-number


class Solution {
public:
    int reverse(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
    int reverse2(int num)
{
    int rev_num = 0;
    bool t=false;
    while (num > 0) {
        int d=num%10;
        if(d==6&&t==false){
            t=true;
            d=9;
        }
        rev_num = rev_num * 10 + d;
        num = num / 10;
    }
    return rev_num;
}
    int maximum69Number (int num) {
       int k=reverse(num);
       return reverse2(k);
    }
};
