//
//  main.cpp
//  스택 수열
//
//  Created by 안대수 on 2021/11/25.
//

#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> st;
    int num;
    cin >> num;
    int arr[num];
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    string str;
    int stack_index = 1;
    st.push(stack_index);
    str += "+";
    stack_index++;
    int arr_index = 0;
    while(1)
    {
        if(st.empty() && arr_index == num)
        {
            for(char ch : str)
            {
                cout << ch << "\n";
            }
            break;
        }
        if((arr_index != num-1) && (stack_index == num))
        {
            cout << "NO";
            break;
        }
        if(st.top() == arr[arr_index])
        {
            st.pop();
            str += "-";
            arr_index++;
        }
        else if(st.top() < arr[arr_index])
        {
            st.push(stack_index);
            str += "+";
            stack_index++;
        }
    }
    return 0;
}
