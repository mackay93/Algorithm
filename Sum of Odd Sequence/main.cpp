//
//  main.cpp
//  Sum of Odd Sequence
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int x = 0, sum = 0;
        cin >> x;
        for(int j = 1; j <= x; j++)
        {
            if(j%2 != 0)
            {
                sum +=j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
