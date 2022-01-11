//
//  main.cpp
//  과자
//
//  Created by 안대수 on 2021/10/05.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c = 0;
    cin >> a >> b >> c;
    if((a*b) > c)
    {
        
        cout << (a*b)-c;
    }
    else
    {
        cout << "0";
    }
    return 0;
}
