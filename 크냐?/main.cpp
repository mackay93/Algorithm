//
//  main.cpp
//  크냐?
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while(true)
    {
        int x,y;
        string res;
        cin >> x >> y;
        if(x == 0 && y == 0)
        {
            break;
        }
        else
        {
            if(x > y)
            {
                res = "Yes";
            }
            else
            {
                res = "No";
            }
            cout <<res << endl;
        }
    }
    return 0;
}
