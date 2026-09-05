class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);
        int MAX = 0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stk.push(i);
            }
            else{
                if(stk.size()==1){
                    stk.top() = i;
                }
                else{
                    stk.pop();
                    MAX = max(MAX,i-stk.top());
                }
            }
        }
        return MAX;
    }
};