class Solution {
public:
    bool isValid(string s) {
        
        if (!s.size()) return true;
        
        
        // Create a stack
        std::stack<char> Stack;
        
        // Iterate over all the elements
        for (int i=0; i<s.size(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') Stack.push(s[i]);
            else if (s[i] == ')' && !Stack.empty() && Stack.top() == '(') Stack.pop();
            else if (s[i] == '}' && !Stack.empty() && Stack.top() == '{') Stack.pop();
            else if (s[i] == ']' && !Stack.empty() && Stack.top() == '[') Stack.pop();
            else return false;
        }
        return Stack.empty();       
    }
};
