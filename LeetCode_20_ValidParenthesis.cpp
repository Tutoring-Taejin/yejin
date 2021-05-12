// LeetCode_20_ValidParenthesis.cpp
class Solution {
public:
    bool isValid(string s) {
        vector<char> p;
        
        int len = s.size();
        for ( int i = 0; i < len; i++ ){
            if ( s[i] == '(' || s[i] == '[' || s[i] == '{' )
                p.push_back(s[i]);
            else {
                if ( p.empty() == true)
                    return false;
                else {
                    if ( s[i] == ')'){
                        if ( p.back() == '(' )
                            p.pop_back();
                        else 
                            return false;
                    }
                    else if ( s[i] == ']'){
                        if ( p.back() == '[' )
                            p.pop_back();
                        else 
                            return false;
                    }
                    else{ 
                        if ( p.back() == '{')
                            p.pop_back();
                        else 
                            return false;
                    }
                }
            }
        }
        if ( p.empty() == true ) 
            return true;
        else
            return false;
    }
};