//
//  main.cpp
//  팰린드롬인지 확인하기
//
//  Created by 안대수 on 2022/01/09.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str, reverse_str;
    cin >> str;
    reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());
    if(str == reverse_str)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
