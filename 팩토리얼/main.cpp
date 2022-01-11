//
//  main.cpp
//  팩토리얼
//
//  Created by 안대수 on 2021/07/04.
//

#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 1 || n ==0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, result = 0;
    cin >> n;
    result = factorial(n);
    cout << result << "\n";
    return 0;
}
