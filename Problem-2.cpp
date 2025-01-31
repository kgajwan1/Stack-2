// as taught by sir (O(n) + O(n))
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

    if(s.length() == 0){
        return true;
    }
    if(s.length() % 2){
        return false;
    }
    
    for(int i =0 ; i < s.length(); i++){
        char c = s[i];
        if(c == '}'|| c == ')' || c == ']'){
            if(stack.size() == 0 ) return false;
            if(c == '}' && stack.top() != '{') return false;
            if(c == ')' && stack.top() != '(') return false;
            if(c == ']' && stack.top() != '[') return false;
            stack.pop();
            
         } else {
            stack.push(c);
        }
    }
    return (stack.size()==0);
    }
};
