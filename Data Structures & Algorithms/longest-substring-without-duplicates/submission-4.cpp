class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        int l=0,r=0;
        int size = 0;
        if(s==""){
            return 0;
        }
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
            while(umap[s[i]]>1){
                umap[s[l]]--;
                l++;
            }
            if((i-l)>size){
                size = i-l;
            }
        }
        return size+1;
    }
};
