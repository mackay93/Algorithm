//
//  main.cpp
//  카드게임
//
//  Created by 안대수 on 2021/09/25.
//

#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e, total = 0;
    cin >> a >> b >> c >> d >> e;
    total = a+b+c+d+e;
    cout << total;
    return 0;
}
