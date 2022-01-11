//
//  main.cpp
//  Hello Judge
//
//  Created by 안대수 on 2021/10/14.
//

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num = 0;
    cin >> num;
    for(int i= 1; i <=num; i++)
    {
        cout << "Hello World, Judge " << i << "!" << endl;
    }
    return 0;
}
