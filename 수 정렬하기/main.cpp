//
//  main.cpp
//  수 정렬하기
//
//  Created by 안대수 on 2021/11/06.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x = 0;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+x);
    for(int i = 0; i < x; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
