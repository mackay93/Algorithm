//
//  main.cpp
//  더하기
//
//  Created by 안대수 on 2021/10/20.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; ++i)
    {
        int inside = 0, sum = 0;
        cin >> inside;
        for(int j = 0 ; j < inside; ++j)
        {
            int x;
            cin >> x;
            sum +=x;
        }
        cout << sum << "\n";
    }
    return 0;
}
