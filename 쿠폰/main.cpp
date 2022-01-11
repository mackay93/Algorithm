//
//  main.cpp
//  쿠폰
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        double x, ten_percent, result;
        cin >> x;
        ten_percent = x * 0.10;
        result = x - (2.0 * ten_percent);
        printf("$%.2f\n", result);
    }
    return 0;
}
