class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string x: tokens){
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                int second = stk.top();
                stk.pop();
                int first = stk.top();
                stk.pop();
                if(x == "+"){
                    stk.push(first + second);
                }
                else if(x == "-"){
                    stk.push(first - second);
                }
                else if(x == "*"){
                    stk.push(first * second);
                }
                else{
                    stk.push(first / second);
                }
            }
            else{
                stk.push(stoi(x));
            }
        }

        return stk.top();
    }
};
