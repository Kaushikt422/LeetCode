class Solution {
public:
    string removeOuterParentheses(string s) {
        string answer;
        stack<char> st;
        for(char c : s){
            if(c=='('){
                if(!st.empty()) answer.push_back(c);
                st.push(c);
            }
            else{
                st.pop();
                if(!st.empty()) answer.push_back(c);
            }
        }
        return answer;
    }
};