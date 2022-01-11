//
//  main.cpp
//  파티가 끝나고 난 뒤
//
//  Created by 안대수 on 2021/09/20.
//

#include <iostream>
#include <array>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int L, P;
    cin >> L >> P;
    int arr[L];
    for(int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] - L*P << " ";
    }
    return 0;
}
