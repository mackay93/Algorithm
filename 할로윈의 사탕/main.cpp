//
//  main.cpp
//  할로윈의 사탕
//
//  Created by 안대수 on 2021/10/19.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int candy = 0, people = 0;
        cin >> candy >> people;
        cout << "You get " << candy/people << " piece(s) and your dad gets " << candy%people << " piece(s)." << "\n";
    }
    return 0;
}
