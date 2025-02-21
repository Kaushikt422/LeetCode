class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string answer ="" ;
        for(int i=0;i<s.length();i++){
            if(s[i]==')') count--;
            if(count!=0) answer.push_back(s[i]);
            if(s[i]=='(') count++;

        }
        return answer;
    }
};