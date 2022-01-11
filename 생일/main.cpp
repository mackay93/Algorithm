//
//  main.cpp
//  생일
//
//  Created by 안대수 on 2021/10/13.
//

#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    int y_old = 10000, m_old = 10000, d_old = 10000;
    int y_young = -1, m_young = -1, d_young = -1, old_index = -1, young_index = -1;
    cin >> num;
    string str_arr[100] = {"",};
    for(int i = 0; i < num; i++)
    {
        int arr[3] = {-1,};
        cin >> str_arr[i];
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }
        if(arr[2] < y_old)
        {
            y_old = arr[2];
            m_old = arr[1];
            d_old = arr[0];
            old_index = i;
            
        }
        else if(arr[2] == y_old)
        {
            if(arr[1] < m_old)
            {
                m_old = arr[1];
                d_old = arr[0];
                old_index = i;
            }
            else if(arr[1] == m_old)
            {
                if(arr[0] < d_old)
                {
                    d_old = arr[0];
                    old_index = i;
                }
            }
        }
        if(arr[2] > y_young)
        {
            y_young = arr[2];
            m_young = arr[1];
            d_young = arr[0];
            young_index = i;
        }
        else if(arr[2] == y_young)
        {
            if(arr[1] > m_young)
            {
                m_young = arr[1];
                d_young = arr[0];
                young_index = i;
            }
            else if(arr[1] == m_young)
            {
                if(arr[0] > d_young)
                {
                    d_young = arr[0];
                    young_index = i;
                }
            }
        }
    }
    cout <<str_arr[young_index] << endl << str_arr[old_index];
    
    return 0;
}
