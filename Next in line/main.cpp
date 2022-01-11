//
//  main.cpp
//  Next in line
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0,y = 0, middle = 0, youngest = 0;
    cin >> x >> y;
    middle = (x > y)? x : y;
    youngest = (x > y)? y : x;
    cout << middle + (middle-youngest);
    return 0;
}
