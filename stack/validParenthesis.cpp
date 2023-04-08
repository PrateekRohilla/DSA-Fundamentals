#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string exp){

    stack<char> s;

    for(int i=0;i<exp.length();i++){

        char ch = exp[i];

        //if opening bracket, push into stack
        if( ch == '(' || ch == '{' || ch == '[' )
            s.push(ch);
        
        //if closed bracket, check stack top & pop
        else{

            if(!s.empty()){

                char top = s.top();

                if(
                    (top == '(' && ch == ')') ||
                    (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']')
                ){
                    s.pop();
                }
                else
                    return false;
            }
            else
                return false;

        }

    }

    if(s.empty())
        return true;
    else
        return false;

}

main(){

    string str = "[()]{}{[()()]()}";

    cout<<validParenthesis(str);

}