//
//  main.cpp
//  운동장 한 바퀴
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int length, radius;
    cin >> length >> radius;
    double result = 0.000000, PI = M_PI;
    result = (length * 2.00) + (2.00 * PI * (double)radius);
    printf("%.6f", result);
    return 0;
}
