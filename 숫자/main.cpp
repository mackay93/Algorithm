//
//  main.cpp
//  숫자
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;
#define ll long long
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x = 0, y = 0 , small = 0, big = 0;
    cin >> x >> y;
    small = (x < y)? x : y;
    big = (x > y)? x : y;
    if(big-small == 1)
    {
        cout << 0;
        return 0;
    }
    else if(big==small)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << big-small -1 << endl;
        for(unsigned long long i = small+1; i < big; i++)
        {
            cout << i << " ";
        }
    }
    return 0;
}
