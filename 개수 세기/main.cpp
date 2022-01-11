//
//  main.cpp
//  개수 세기
//
//  Created by 안대수 on 2021/11/30.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0 ;
    cin >> num;
    int arr[num];
    for(int i = 0; i < num; i++)
    {
        cin>> arr[i];
    }
    int target = 0, counter = 0;
    cin >> target;
    for(int i = 0; i < num; i++)
    {
        if(arr[i] == target)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
