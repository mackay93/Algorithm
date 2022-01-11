//
//  main.cpp
//  시험 점수
//
//  Created by 안대수 on 2021/10/08.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e,f,g,h, total1, total2, res;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;
    total1 = a+b+c+d;
    total2 = e+f+g+h;
    res = (total1 >= total2)? total1 : total2;
    cout << res;
    return 0;
}
