//
//  main.cpp
//  피보나치 수 5
//
//  Created by 안대수 on 2021/07/04.
//

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, result = 0;
    cin >> n;
    result = fibonacci(n);
    cout << result;
    return 0;
}

