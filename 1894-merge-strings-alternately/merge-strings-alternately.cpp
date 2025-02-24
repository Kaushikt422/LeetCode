class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int i=0;
        string merge;

        while(i<word1.length()||i<word2.length()){

            if(i<word1.length()) merge += word1[i];
            if(i<word2.length()) merge += word2[i];
            i++;
        }
        return merge;
    }
};