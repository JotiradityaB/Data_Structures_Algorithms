//https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits


class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        v.push_back(num/1000);
        v.push_back(num%10);
        v.push_back((num/100)%10);
        v.push_back((num/10)%10);
        sort(v.begin(),v.end());
        int n1=v[0]*10+v[3];
        int n2=v[1]*10+v[2];
        return n1+n2;
    }
};
