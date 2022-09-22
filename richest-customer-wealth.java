//https://leetcode.com/problems/richest-customer-wealth


class Solution {
    public int maximumWealth(int[][] accounts) {
        int a[]=new int[accounts.length];
        int s;
        for(int i=0;i<accounts.length;i++){
            s=0;
            for(int j=0;j<accounts[0].length;j++){
                s=s+accounts[i][j];
            }
            a[i]=s;
        }
        int max=a[0];
        for(int i=0;i<a.length;i++){
            if(max<a[i])
                max=a[i];
        }
        return max;
    }
}
