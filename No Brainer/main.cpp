//
//  main.cpp
//  No Brainer
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int x = 0,y = 0;
        cin >> x >> y;
        if(x >= y)
        {
            cout << "MMM BRAINS" << endl;
        }
        else
        {
            cout << "NO BRAINS" << endl;
        }
    }
    return 0;
}
