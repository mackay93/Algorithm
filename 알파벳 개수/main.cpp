//
//  main.cpp
//  알파벳 개수
//
//  Created by 안대수 on 2022/01/01.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    int arr[26];
    fill(arr, arr+26, 0);
    for(char ch : str)
    {
        arr[ch - 97]++;
    }
    for(int i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
