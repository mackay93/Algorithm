//
//  main.cpp
//  직사각형에서 탈출
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>

using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, w, h, result, result2, result3;
    cin >> x >> y >> w >> h;
    result = (w-x >h-y)? h-y :w-x;
    result2 = (x > y)? y:x;
    result3 = (result > result2)? result2 : result;
    cout << result3;
    return 0;
}
