//
//  main.cpp
//  연세대학교
//
//  Created by 안대수 on 2021/10/08.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    string str;
    cin >> num;
    str = (num == 0)? "YONSEI" : "Leading the Way to the Future";
    cout << str;
    return 0;
}
