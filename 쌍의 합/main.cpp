//
//  main.cpp
//  쌍의 합
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    int arr[12] = {};       //이렇게 쓰면 배열 전체를 0으로 초기화
    for(int i = 0; i < num; i++)
    {
        for(int i = 0; i < 12; i++)
        {
            arr[i] = -1;
        }
        int find = 0;
        cin >> find;
        if(find < 3)
        {
            cout << "Pairs for "<< find << ":" << endl;
        }
        else
        {
            cout << "Pairs for "<< find << ": ";
            for(int j = 1; j < find; j++)
            {
                if(arr[j] != 0)
                {
                    if(j == find-j)
                    {
                        continue;
                    }
                    if(j != 1)
                    {
                        cout<<", ";
                    }
                    cout << j << " " << find-j;
                    arr[j] = 0;
                    arr[find-j] = 0;
                }
            }
            cout << endl;
        }
        
    }
    return 0;
}
