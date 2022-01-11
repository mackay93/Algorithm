//
//  main.cpp
//  체스판 조각
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, result;
    cin >> x;
    if(x%2==0)
    {
        cout << (int)pow(((x/2)+1),2);
    }
    else
    {
        result = (int)pow((((x-1)/2)+1),2);
        result +=(x/2)+1;
        cout << result;
    }
    return 0;
}
