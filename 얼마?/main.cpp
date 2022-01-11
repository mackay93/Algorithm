//
//  main.cpp
//  얼마?
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
        int price = 0, option = 0;
        cin >> price;
        cin >> option;
        for(int j = 0; j < option; j++)
        {
            int option_count = 0, option_price = 0, total_option_price = 1;
            cin >> option_count >> option_price;
            total_option_price = option_count * option_price;
            price += total_option_price;
        }
        cout << price << endl;
        
    }
    return 0;
}
