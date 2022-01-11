//
//  main.cpp
//  상근날드
//
//  Created by 안대수 on 2021/09/30.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5];
    int burger_min, drink_min;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    burger_min = arr[0];
    drink_min = arr[3];
    for(int j = 1 ; j < 3; j++)
    {
        if(arr[j] < burger_min)
        {
            burger_min = arr[j];
        }
    }
    if(drink_min > arr[4])
    {
        drink_min = arr[4];
    }
    cout << burger_min + drink_min - 50;
    return 0;
}
