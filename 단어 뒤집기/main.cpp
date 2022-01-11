//
//  main.cpp
//  단어 뒤집기
//
//  Created by 안대수 on 2021/11/24.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 0;
    cin >> num;
    cin.ignore();               //입력 버퍼 지워주기
                                //(cin 사용 후 \n가 입력버퍼에 남아있어서 getline에서 입력 처리가 된다.
    string str_arr[1001];
    while(num--)
    {
        string str = "";
        getline(cin, str);      //입력을 통으로 받는다
        str += ' ';             // 마지막 입력에 ' '을 추가해준다. 이유는 string이 끝났다는걸 알려주기 위해
        stack<char> st;
        for(char ch : str)      // ch가 str을 돌면서
        {
            if(ch == ' ')       // 만약 ch가 ' '이면
            {
                while(!st.empty())  // 지금까지 쌓여있던 스택이 empty가 될때 까지.
                {
                    cout << st.top(); //stack.pop 출력
                    st.pop();         //출력 후 pop()
                }
                cout << ch;         //그리고 ' ' 출력
            }
            else
            {
                st.push(ch);        // ' '이 아니면 스택에 추가
            }
        }
    }
    return 0;
}
