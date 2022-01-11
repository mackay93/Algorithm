//
//  main.cpp
//  홀수
//
//  Created by 안대수 on 2021/10/15.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int min = 1000000, sum = 0, count = 0;
    for(int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;
        if(x%2 !=0)
        {
            count++;
            sum +=x;
            if(x<min)
            {
                min = x;
            }
        }
    }
    if(count == 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << "\n";
        cout << min;
    }
    return 0;
}
