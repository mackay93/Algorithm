//
//  main.cpp
//  주사위 세개
//
//

#include <iostream>
#include <array>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[7] = {0,0,0,0,0,0,0};
    for(int i = 0; i < 3; i++)
    {
        int num;
        cin >> num;
        arr[num]++;
    }
    
    int result = 0, max = -1;
    for(int i = 1; i < 7; i++)
    {
        if(arr[i] == 3)
        {
            max = -1;
            result = 10000 + (i *1000);
            break;
        }
        else if(arr[i] == 2)
        {
            max = -1;
            result = 1000 + (i *100);
            break;
        }
        else if(arr[i] == 1)
        {
            max = i;
        }
        
    }
    if(max == -1)
    {
        cout << result;
    }
    else
    {
        cout << max * 100;
    }
    return 0;
}
