//
//  main.cpp
//  분해합
//
//  Created by 안대수 on 2021/11/30.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    int answer[num+1];
    fill(answer, answer + num, 0);
    answer[0] = 0;
    for(int i = 1; i <= num; i++)
    {
        int index = i, counter = i;
        answer[index] += i;
        while(counter > 0)
        {
            answer[index] += counter % 10;
            counter = counter / 10;
        }
    }
    for(int i = 1; i <= num; i++)
    {
        if(answer[i] == num)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
