//
//  main.cpp
//  숫자 맞추기 게임
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int i = 1;
    while(1)
    {
        int n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
        cin >> n0;
        if(n0 == 0)
        {
            break;
        }
        n1 = 3 * n0;
        if(n1 % 2 ==0 )
        {
            n2 = n1 / 2;
            n3 = 3 * n2;
            n4 = n3 / 9;
            cout << i << ". even " << n4 << endl;
            i++;
        }
        else
        {
            n2 = n1 / 2;
            n3 = 3 * n2;
            n4 = n3 / 9;
            cout << i << ". odd " << n4 << endl;
            i++;
        }
    }
    return 0;
}
