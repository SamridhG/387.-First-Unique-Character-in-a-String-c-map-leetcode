class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>M;
        for(auto p:s)
        {M[p]++;}
        
        for(int i=0;i<s.size();i++)
        {
            if(M[s[i]]==1)return i;
        }
        return -1;
    }
};
