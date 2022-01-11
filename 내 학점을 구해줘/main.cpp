//
//  main.cpp
//  내 학점을 구해줘
//
//  Created by 안대수 on 2021/10/13.
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
        int subjects = 0, total_credits = 0;
        double result = 0.0;
        cin >> subjects;
        for(int j = 0; j < subjects; j++)
        {
            int credits;
            double score;
            cin >> credits >> score;
            total_credits += credits;
            result += credits * score;
            
        }
        cout << total_credits << " ";
        cout.precision(2);
        cout << result/total_credits << endl;
    }
    return 0;
}
