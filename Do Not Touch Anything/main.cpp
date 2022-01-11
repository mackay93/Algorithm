//
//  main.cpp
//  Do Not Touch Anything
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long R, C, N, res1, res2, total = 1;
    cin >> R >> C >> N;
    if(R%N == 0)
    {
        res1 = R/N;
    }
    else
    {
        res1 = R/N +1;
    }
    if(C%N == 0)
    {
        res2 = C/N;
    }
    else
    {
        res2 = C/N +1;
    }
    total = res1*res2;
    cout << total;
    return 0;
}
