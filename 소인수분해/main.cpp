//
//  main.cpp
//  소인수분해
//
//  Created by 안대수 on 2021/08/28.
//

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num ;
    for(int i = 2; i <= num; i++)
    {
        while(num%i == 0)
        {
            num /= i;
            cout<<i<<"\n";
        }
    }
    return 0;
}
