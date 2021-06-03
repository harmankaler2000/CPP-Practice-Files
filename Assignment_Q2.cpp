// A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].
// Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) 
//occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. 
//There are three types of matched pairs of brackets: [], {}, and ().
// A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. 
//For example, {[(])} is not balanced because the contents in between { and } are not balanced.
// The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, 
//unbalanced closing square bracket, ].
// By this logic, we say a sequence of brackets is balanced if the following conditions are met:
//     It contains no unmatched brackets.
//     The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
//Given strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, 
//return YES. Otherwise, return NO.

//logic:
//declare stack 
// if current char is opening bracket then push it in the stack
// if it is a closing bracket then if the top is the same opening bracket
//then pop it else string is not balanced
#include<bits/stdc++.h>
using namespace std;

bool balanced_bracket(string str)
{
    //print the input string
    for(int i = 0;i<str.length();i++)
        cout<<str[i]<<" ";
    
    cout<<endl;
    char top_element;
    stack<char> exp_stack;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
        {
            exp_stack.push(str[i]);
            continue;
        }
        //if it is not opening then it must be
        //closing and shouldn't be empty
        if(exp_stack.empty())
            return false;
        switch (str[i])
        {
        case ')':
            top_element = exp_stack.top();
            exp_stack.pop();
            //if it is any othet bracket that means it is not balanced
            if(top_element =='{' || top_element == '[')
                return false;
            break;
        case '}':
            top_element = exp_stack.top();
            exp_stack.pop();
            //if it is any othet bracket that means it is not balanced
            if(top_element =='(' || top_element == '[')
                return false;
            break;
        case ']': 
            top_element = exp_stack.top();
            exp_stack.pop();
            //if it is any othet bracket that means it is not balanced
            if(top_element =='{' || top_element == '(')
                return false;
            break;
        default:
            break;
        }
    }
    //if the stack is balanced then it will be empty and return true
    //else returns false
    return exp_stack.empty();
}
int main()
{
    string expression;
    //test cases
    // {[()]} balanced
    expression = "{[()]}";
    if(balanced_bracket(expression))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // {[(])} unbalanced
    expression = "{[(])}";
    if(balanced_bracket(expression))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // {{[[(())]]}} balanced
    expression = "{{[[(())]]}}";
    if(balanced_bracket(expression))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // {[(()])} unbalanced
    expression = "{[(()])}";
    if(balanced_bracket(expression))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // balanced as it is an empty string
    expression = "";
    if(balanced_bracket(expression))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // ) unbalanced
    expression = ")";
    if(balanced_bracket(expression))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}