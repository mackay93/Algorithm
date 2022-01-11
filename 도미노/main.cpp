//
//  main.cpp
//  도미노
//
//  Created by 안대수 on 2021/11/22.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    int result = 0;
    for(int i = num; i >= 1; i--)
    {
        for(int j = 0; j <=num; j++)
        {
            result += (i*2)-j;
        }
    }
    cout << result;
    return 0;
}
