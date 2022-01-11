//
//  main.cpp
//  별 찍기 - 9
//
//  Created by 안대수 on 2021/10/09.
//

#include <iostream>

using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < (2*N)-1; i++)
    {
        for(int j = i; j>0 ; j--)
        {
            cout << " ";
        }
        for(int k = (2*N)-1-i; k>0; k--)
        {
            cout << "*";
        }
        for(int l = i; l > 0; l--)
        {
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
