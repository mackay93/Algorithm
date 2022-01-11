//
//  main.cpp
//  이상한 기호
//
//  Created by 안대수 on 2021/09/29.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y;
    cin >> x >> y;
    cout << (x+y)*(x-y);
    return 0;
}
