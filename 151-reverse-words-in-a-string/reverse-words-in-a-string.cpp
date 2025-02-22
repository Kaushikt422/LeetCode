class Solution {
public:
    string reverseWords(string s) {
        if(s.empty()) return "";
        stringstream ss(s);
        vector<string> Words;
        string word;
        
        while(ss>>word){
            Words.push_back(word);
        }
        string result;
        reverse(Words.begin(),Words.end());
        for(int i=0;i<Words.size();i++){
            
            result+=Words[i];
            if(i != Words.size()-1){
                result+= " ";
            }
        }
        return result;
    }
};