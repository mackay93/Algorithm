//
//  main.cpp
//  첼시를 도와줘!
//
//  Created by 안대수 on 2021/10/12.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int players, biggest = -1, index = -1;
        cin >> players;
        int money[players];
        string names[players];
        
        for(int j = 0; j < players; j++)
        {
            cin >> money[j] >> names[j];
            if(money[j] > biggest)
            {
                biggest = money[j];
                index = j;
            }
        }
        cout << names[index] << endl;
    }
    return 0;
}
