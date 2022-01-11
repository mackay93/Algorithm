//
//  main.cpp
//  스택
//
//  Created by 안대수 on 2021/11/04.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;
#define NL "\n"
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> stack;
    int x;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        string str;
        cin >> str;
        if(str.compare("push") == 0)
        {
            int num;
            cin >> num;
            stack.push(num);
        }
        else if(str.compare("pop") == 0)
        {
            if(stack.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                cout << stack.top() << NL;
                stack.pop();
            }
        }
        else if(str.compare("size") == 0)
        {
            cout << stack.size() << NL;
        }
        else if(str.compare("top") == 0)
        {
            if(stack.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                cout <<stack.top() << NL;
            }
        }
        else if(str.compare("empty") == 0)
        {
            if(stack.empty())
            {
                cout << 1 << NL;
            }
            else
            {
                cout << 0 << NL;
            }
        }
    }
    return 0;
}
