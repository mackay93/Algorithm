//
//  main.cpp
//  세금
//
//  Created by 안대수 on 2021/10/26.
//

#include <iostream>

using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x = 0;
    cin >> x;
    cout << (int)(x-((x*0.01)*22)) << " " << (int)(x-(((x*0.2)*0.01)*22));
    //cout << (int)(x*0.78) << " " << (int)(x*0.956);
    return 0;
}
