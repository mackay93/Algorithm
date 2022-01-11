//
//  main.cpp
//  지능형 기차 2
//
//  Created by 안대수 on 2021/10/26.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max = 0, total = 0;
    for(int i = 0; i < 10; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        if(i==0)
        {
            max = y;
            total = y;
        }
        else
        {
            total = total-x;
            total = total+y;
            if(total > max)
            {
                max = total;
            }
        }
    }
    cout << max;
    return 0;
}
