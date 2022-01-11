//
//  main.cpp
//  하얀 칸
//
//  Created by 안대수 on 2022/01/02.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char ch_arr[8][8];
    int count = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cin >> ch_arr[i][j];
            if(ch_arr[i][j] == 'F')
            {
                if((i%2==0 && j%2 == 0) || (i%2 !=0 && j%2 !=0))
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}
