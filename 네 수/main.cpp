//
//  main.cpp
//  네 수
//
//  Created by 안대수 on 2021/12/12.
//

#include <iostream>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    num1 = num1 + num2;
    num3 = num3 + num4;
    unsigned long long  result1 = 0, result2 = 0;
    result1 = stoll(num1);
    result2 = stoll(num3);
    cout << result1 + result2;
    return 0;
}
