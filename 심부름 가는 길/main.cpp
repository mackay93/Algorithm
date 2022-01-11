//
//  main.cpp
//  심부름 가는 길
//
//  Created by 안대수 on 2021/09/25.
//

#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d, total = 0;
    cin >> a >> b >> c >> d;
    total = a + b + c + d;
    cout << total/60 << "\n";
    cout << total%60;
    return 0;
}
