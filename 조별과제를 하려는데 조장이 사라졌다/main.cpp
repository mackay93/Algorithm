//
//  main.cpp
//  조별과제를 하려는데 조장이 사라졌다
//
//  Created by 안대수 on 2021/09/29.
//


#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, min;
    cin >> x;
    if(x <= 5)
    {
        min = 1;
        cout << min;
    }
    else
    {
        if(x%5 == 0)
        {
            min = x/5;
        }
        else
        {
            min = x/5 +1;
        }
        cout << min;
    }
    return 0;
}
