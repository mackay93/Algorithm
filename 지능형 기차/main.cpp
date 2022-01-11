//
//  main.cpp
//  지능형 기차
//
//  Created by 안대수 on 2021/10/21.
//

#include <iostream>
using namespace std;
#define EL "\n"

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int first_out = 0, first_in = 0,sum = 0, max = -1;
    cin >> first_out >> first_in;
    sum = first_in;
    max = first_in;
    for(int i = 0; i < 3; i++)
    {
        int out = 0, in = 0;
        cin >> out >> in;
        sum -= out;
        sum += in;
        if(sum >= max)
        {
            max = sum;
        }
    }
    cout << max;
    return 0;
}
