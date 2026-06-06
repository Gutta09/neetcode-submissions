class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs.back();
        int n=min(first.length(),last.length());
        for(int i=0;i<n;i++){
            if(first[i]!=last[i]){
                return first.substr(0,i);
            }
            
        }
        return first.substr(0,n);
    }
};