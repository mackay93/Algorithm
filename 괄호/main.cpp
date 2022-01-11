//
//  main.cpp
//  괄호
//
//  Created by 안대수 on 2021/11/08.
//
// ( 일때 스택에 push ) 일때 pop하고 stack이 empty이면 true 아니면 false
#include <iostream>
#include <stack>
using namespace std;
bool isVPS(string str)
{
    stack<char> stack;
    for(int j = 0; j <str.length(); j++)
    {
        if(str[j] == '(')
        {
            stack.push('(');
        }
        else if(str[j] == ')')
        {
            if(!stack.empty())
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(stack.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        if(isVPS(str))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
