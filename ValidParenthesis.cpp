class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        int i = 0;
        while(i<s.size()){
            char c = s[i];
            char top = ' ';
            if(!st.empty())
                top = st.top();
            if(c == '}' && top == '{')
                st.pop();
            else if(c == ')' && top == '(')
                st.pop();
            else if(c == ']' && top == '[')
                st.pop(); 
            else
                st.push(s[i]);
            i = i + 1;
        }
        if(!st.empty())
            return false;
        else
            return true;
    }
};