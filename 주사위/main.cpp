//
//  main.cpp
//  주사위
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
    for (int i=1; i <= num; ++i)
    {
        int first = 0, second = 0;
        cin >> first >> second;
        cout << "Case " << i << ": " << first + second << "\n";
    }
    return 0;
}
