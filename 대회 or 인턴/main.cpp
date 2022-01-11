//
//  main.cpp
//  대회 or 인턴
//
//  Created by 안대수 on 2021/12/12.
//

#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M,K;
    cin >> N >> M >> K;
    int count = min(N / 2, M);
    count = min(count, (N + M - K) / 3);      
    cout << count;
    return 0;
}
