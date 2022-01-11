//
//  main.cpp
//  Plane
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a = 0, x = 0, b = 0, y = 0;
    cin >> a >> x >> b >> y;
    cout << (a*x) + (b*y);
    return 0;
}
