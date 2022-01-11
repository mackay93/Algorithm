//
//  main.cpp
//  분산처리
//
//  Created by 안대수 on 2021/10/28.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int a = 0, b = 0, result = 1;
        cin >> a >> b;
        for(int j = 0; j < b-1; j++)
        {
            result = (result * a)%10;
        }
        if(result == 0)
        {
            cout << 10 << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    return 0;
}
