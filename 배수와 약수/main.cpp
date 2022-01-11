//
//  main.cpp
//  배수와 약수
//
//  Created by 안대수 on 2021/10/28.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(1)
    {
        int x, y;
        cin >> x >> y;
        if(x == 0 && y == 0)
        {
            break;
        }
        else
        {
            if(y % x == 0)
            {
                cout << "factor" << endl;
            }
            else if(x % y == 0)
            {
                cout << "multiple" << endl;
            }
            else
            {
                cout << "neither" << endl;
            }
        }
    }
    return 0;
}
