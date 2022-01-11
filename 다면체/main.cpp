//
//  main.cpp
//  다면체
//
//  Created by 안대수 on 2021/10/20.
//

#include <iostream>
#include <cmath>
using namespace std;
#define nxt "\n"
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    for ( int i = 0; i < num; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        cout << abs(x-y)+2 << nxt;
    }
    return 0;
}
