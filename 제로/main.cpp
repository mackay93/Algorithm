//
//  main.cpp
//  제로
//
//  Created by 안대수 on 2021/11/04.
//

#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> stack;
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int x = 0;
        cin >> x;
        if(x == 0)
        {
            //cout << stack.top();
            stack.pop();
        }
        else
        {
            stack.push(x);
        }
    }
    long long result = 0, size = 0;
    size = (int)stack.size();
    for(int i = 0 ; i < size; i++)
    {
        result += stack.top();
        stack.pop();
    }
    cout << result;
    return 0;
}
