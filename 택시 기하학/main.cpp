//
//  main.cpp
//  택시 기하학
//
//  Created by 안대수 on 2021/10/26.
//
#include <iostream>
#include <cmath>
using namespace std;
#define EL "\n"
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double x;
    cin >> x;
    cout<<fixed;
    cout.precision(6);
    cout << (double)(M_PI*x*x) << EL;
    cout << (double)(x*x*2);
    return 0;
}
