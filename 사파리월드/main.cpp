//
//  main.cpp
//  사파리월드
//
//  Created by 안대수 on 2021/10/05.
//
//입력
//첫째 줄에 두 도메인의 유명도 N과 M이 주어진다. (-2,000,000,000 ≤ N, M ≤ 2,000,000,000)
//
//출력
//첫째 줄에 두 유명도의 차이 (|N-M|)을 출력한다.

#include <iostream>
#include <cstdlib>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b;
    cin >> a >> b;
    cout << abs(a-b);
    return 0;
}
