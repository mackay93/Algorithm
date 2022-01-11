//
//  main.cpp
//  검증수
//
//  Created by 안대수 on 2021/07/08.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,c,d,e, result = 0;
    cin >> a >> b >> c >> d >> e;
    a = pow(a,2);
    b = pow(b,2);
    c = pow(c,2);
    d = pow(d,2);
    e = pow(e,2);
    result = (int)(a+b+c+d+e)%10;
    cout << result;
    return 0;
}
