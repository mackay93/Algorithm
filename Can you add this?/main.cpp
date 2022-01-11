//
//  main.cpp
//  Can you add this?
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        ll x = 0, y = 0;
        cin >> x >> y;
        cout << x+y << endl;
    }
    return 0;
}
