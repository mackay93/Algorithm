//
//  main.cpp
//  요세푸스 문제 0
//
//  Created by 안대수 on 2021/11/10.
//

#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int total = 0, num = 0;
    cin >> total >> num;
    
    queue<int> que;
    queue<int> res;
    for(int i = 1; i <= total; i++)
    {
        que.push(i);
    }
    
    int count = num-1;
    while(que.size() != 0)
    {
        for(int i = 0; i < count; i++)
        {
            que.push(que.front());
            que.pop();
        }
        res.push(que.front());
        que.pop();
    }
    cout << "<";
    string str;
    for(int i = 0; i < total; i++)
    {
        int num = res.front();
        str += to_string(num);
        res.pop();
        if(i != total-1)
        {
            str += ", ";
        }
    }
    cout << str;
    cout << ">";

    return 0;
}
