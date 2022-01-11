//
//  main.cpp
//  네 번째 점
//
//  Created by 안대수 on 2021/10/19.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int first[10001] = {};
    int second[10001] = {};
    int first_d = 0, second_d = 0;
    for(int i = 0 ; i < 3; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        first[x]++;
        second[y]++;
    }
    for(int i = 0; i<=10000; i++)
    {
        if(first[i] == 1)
        {
            first_d = i;
        }
        if(second[i] ==1)
        {
            second_d = i;
        }
    }
    cout << first_d << " " << second_d;
    return 0;
}
