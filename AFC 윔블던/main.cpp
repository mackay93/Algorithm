//
//  main.cpp
//  AFC 윔블던
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int hap, cha, winner, loser;
    cin >> hap >> cha;
    winner = hap-cha;
    loser = hap - winner;
    if(loser + cha != hap)
    {
        cout << -1;
    }
    else
    {
        cout << winner << loser;
    }
    return 0;
}
