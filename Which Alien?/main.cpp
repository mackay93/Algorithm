//
//  main.cpp
//  Which Alien?
//
//  Created by 안대수 on 2021/10/14.
//


#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0, y = 0;
    cin >> x >> y;
    if(x >= 3 && y <= 4)
    {
        cout << "TroyMartian" << endl;
    }
    if(x <=6 && y >=2)
    {
        cout << "VladSaturnian" << endl;
    }
    if(x <= 2 && y <= 3)
    {
        cout << "GraemeMercurian" << endl;
    }
    return 0;
}
