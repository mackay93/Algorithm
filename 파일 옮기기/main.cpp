//
//  main.cpp
//  파일 옮기기
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <array>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d, res = 0;
    cin >> a >> b >> c >> d;
    res = (b+c > a+d)? a+d : b+c;
    cout << res;
    return 0;
}
