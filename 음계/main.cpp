//
//  main.cpp
//  음계
//
//  Created by 안대수 on 2021/11/15.
//

#include <iostream>
using namespace std;
int arr[9];
bool isASCE(int arr[])
{
    bool result = true;
    for(int i = 1; i <= 8; i++)
    {
        if(arr[i] != i)
        {
            result = false;
        }
    }
    return result;
}

bool isDSCE(int arr[])
{
    bool result = true;
    int count = 1;
    for(int i = 8; i >= 1; i--)
    {
        if(arr[i] != count)
        {
            result = false;
        }
        count++;
    }
    return result;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 1; i <= 8; i++)
    {
        cin >> arr[i];
    }
    if(isASCE(arr) == true)
    {
        cout << "ascending";
    }
    else if(isDSCE(arr) == true)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
    return 0;
}
