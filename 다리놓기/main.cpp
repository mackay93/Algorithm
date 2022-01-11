//
//  main.cpp
//  다리놓기
//
//  Created by 안대수 on 2021/11/07.
//

#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int combination(int N, int M);
unsigned long long dp[30][30];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x = 0;
    cin >> x;
    
    memset(dp, -1, sizeof(dp));
    
    for(int i = 0; i < 30; i++)
    {
        dp[i][i] = 1;
        dp[i][0] = 1;
        dp[1][i] = i;
    }
    
    while(x--)
    {
        int N = 0, M = 0;
        cin >> N >> M;
        cout << combination(M,N) << "\n";
    }
    
    return 0;
}
int combination(int M, int N)
{
    if(dp[M][N] == -1)
    {
        dp[M][N] = combination(M-1,N-1) + combination(M-1,N);
    }
    return dp[M][N];
}
