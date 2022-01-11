//
//  main.cpp
//  나는 행복합니다~
//
//  Created by 안대수 on 2021/09/29.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,y,z, count = 0;
    cin >> x >> y >> z;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(z==count)
            {
                cout << i << " " << j;
            }
            count++;
        }
    }
    return 0;
}
