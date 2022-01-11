//
//  main.cpp
//  큐 2
//
//  Created by 안대수 on 2021/11/09.
//

#include <iostream>
#include <queue>
#define NL "\n"
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> queue;
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        if(str.compare("push") == 0)
        {
            int number = 0;
            cin >> number;
            queue.push(number);
        }
        else if(str.compare("pop") == 0)
        {
            if(queue.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                int x = queue.front();
                cout << x << NL;
                queue.pop();
            }
        }
        else if(str.compare("size") == 0)
        {
            cout << queue.size() << NL;
        }
        else if(str.compare("empty") == 0)
        {
            if(queue.empty())
            {
                cout << 1 << NL;
            }
            else
            {
                cout << 0 << NL;
            }
        }
        else if(str.compare("front") == 0)
        {
            if(queue.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                cout << queue.front() << NL;
            }
        }
        else if(str.compare("back") == 0)
        {
            if(queue.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                cout << queue.back() << NL;
            }
        }
    }
    return 0;
}
