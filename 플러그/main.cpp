//
//  main.cpp
//  플러그
//
//  Created by 안대수 on 2021/10/19.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num =0, total = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int x = 0;
        cin >> x;
        if(i == num-1)
        {
            total +=x;
        }
        else
        {
            total += x-1;
        }
    }
    cout << total;
    return 0;
}
