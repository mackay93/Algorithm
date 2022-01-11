//
//  main.cpp
//  영수증
//
//  Created by 안대수 on 2021/10/13.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int total = 0;
    cin >> total;
    for(int i = 0; i < 9; i++)
    {
        int x = 0;
        cin >> x;
        total -= x;
    }
    cout << total;
    return 0;
}
