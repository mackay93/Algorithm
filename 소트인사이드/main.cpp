//
//  main.cpp
//  소트인사이드
//
//  Created by 안대수 on 2021/11/11.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    sort(str.rbegin(), str.rend());
    cout << str;
    return 0;
}
