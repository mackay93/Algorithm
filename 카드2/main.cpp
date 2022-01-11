//
//  main.cpp
//  카드2
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
    int num = 0;
    cin >> num;
    queue<int> queue;
    for(int i = 1; i <= num; i++)
    {
        queue.push(i);
    }
    if(num ==1 )
    {
        cout << 1;
        return 0;
    }
    while(1)
    {
        queue.pop();
        if(queue.size() == 1)
        {
            break;
        }
        int front = queue.front();
        queue.push(front);
        queue.pop();
    }
    int result = queue.front();
    cout << result;
    return 0;
}
