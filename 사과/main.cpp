//
//  main.cpp
//  사과
//
//  Created by 안대수 on 2021/10/15.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0, sum = 0;
    cin >> x;
    for(int i = 0; i<x; i++)
    {
        int student = 0, apples = 0;
        cin >> student >> apples;
        sum += apples %student;
    }
    cout << sum;
    return 0;
}
