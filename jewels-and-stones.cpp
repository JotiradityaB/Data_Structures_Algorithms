//https://leetcode.com/problems/jewels-and-stones/


class Solution {
public:
    unordered_map<char,int> umap;
    int numJewelsInStones(string J, string S) {
        for(char c:S){
            umap[c]++;
        }
        int count=0;
        for(char c:J){
            if(umap.count(c)){
                count+=umap[c];
            }
        }
        return count;
    }
};
