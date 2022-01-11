//
//  main.cpp
//  좌표 정렬하기
//
//  Created by 안대수 on 2021/11/15.
//

#include <iostream>
#include <vector>
#include <algorithm>
#define NL "\n"
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    vector<vector<int>> vec(num, vector<int>(2,0)); // num 가로 , 2 세로 인 2차원 벡터를 0으로 초기화.
    for(int i = 0; i < num; i++)
    {
        cin >> vec[i][0];
        cin >> vec[i][1];
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < num; i++)
    {
        cout << vec[i][0] << " " << vec[i][1] << NL;
    }
    return 0;
}
