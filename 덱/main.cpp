//
//  main.cpp
//  덱
//
//  Created by 안대수 on 2021/11/29.
//

#include <iostream>
#include <deque>
#define NL "\n"
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    deque<int> deq;
    string str;
    for(int i = 0; i < num; i++)
    {
        cin >> str;
        if(str.compare("push_front") == 0)
        {
            int x = 0;
            cin >> x;
            deq.push_front(x);
        }
        else if(str.compare("push_back") == 0)
        {
            int x = 0;
            cin >> x;
            deq.push_back(x);
        }
        else if(str.compare("pop_front") == 0)
        {
            if(deq.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                int x = 0;
                x = deq.front();
                deq.pop_front();
                cout << x << NL;
            }
        }
        else if(str.compare("pop_back") == 0)
        {
            if(deq.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                int x = 0;
                x = deq.back();
                deq.pop_back();
                cout << x << NL;
            }
        }
        else if(str.compare("size") == 0)
        {
            cout << deq.size() << NL;
        }
        else if(str.compare("empty") == 0)
        {
            if(deq.empty())
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
            if(deq.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                cout << deq.front() << NL;
            }
        }
        else if(str.compare("back") == 0)
        {
            if(deq.empty())
            {
                cout << -1 << NL;
            }
            else
            {
                cout << deq.back() << NL;
            }
        }
    }
    return 0;
}
