class Solution {
public:

    string encode(vector<string>& strs) {
        string coded;
        for(const string &str:strs){
            int n=str.length();
            coded=coded+to_string(n)+"#"+str;
        }
        return coded;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            int x = s.find("#",i);
            int len = stoi(s.substr(i,x-i));
            string word = s.substr(x+1,len);
            i = x+len+1;
            res.push_back(word);
        }
        return res;
    }
};
