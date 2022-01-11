//
//  main.cpp
//  나이순 정렬
//
//  Created by 안대수 on 2021/11/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> x, pair<int, string> y)
{
    return x.first < y.first;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    vector<pair<int,string>> vec(num);
    for(int i = 0; i < num; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    stable_sort(vec.begin(), vec.end(), compare);   //정렬하기 전 배열의 입력 순서를 고려한다.
                                                    // 예를들어 (1,9)와 (1,4) 순서로 입력이 되었을때는
                                                    // 1,9를 먼저 출력하고 1,4를 출력한다.
    for(int i = 0; i < num; i++)
    {
        cout << vec[i].first << " " << vec[i].second <<  "\n";
    }
    return 0;
}
