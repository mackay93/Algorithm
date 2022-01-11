//
//  main.cpp
//  1로 만들기
//
//  Created by 안대수 on 2021/11/05.
//

#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    //1 0
    //2 1
    //3 1
    //4 2
    //5 3
    //6 2
    int dp[num];
    memset(dp, -1, sizeof(dp));                         //dp array를 -1로 전체 초기화
    dp[0] = 0;  //점화식을 세우기 위한 비용 계산
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i <= num; i++)
    {
        dp[i] = dp[i-1] + 1;        // 주어진 숫자에서 -1만큼 더했을떄 값을 저장
        if(i%2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
        //만약 i 가 2로 나누어진다면 1씩 뺐을때의 비용과 2로 나누었을때 비용 중 작은걸 그 자리에 넣는다.
        if(i%3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
        //만약 i 가 3으로 나누어 진다면 1씩 뺐을때의 비용과 3으로 나누었을때 비용중 작을걸 그 자리에 넣는다.
    }
    cout << dp[num];
    return 0;
}
