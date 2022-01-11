//
//  main.cpp
//  수들의 합
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, i=1, count = 0, sum = 0;
    cin >> x;
    while(true)
    {
        if(sum > x)
        {
            count--;
            break;
        }
        else
        {
            sum = sum +i;
            i++;
            count++;
        }
    }
    cout << count;
    return 0;
}
