//
//  main.cpp
//  단어 정렬
//
//  Created by 안대수 on 2021/11/23.
//

//#include <iostream>
//#include <array>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    ios::sync_with_stdio(false);
//    int num;
//    cin >> num;
//    string str_arr[num];
//    for(int  i = 0; i < num; i++)
//    {
//        string str;
//        cin >> str_arr[i];
//    }
//    sort(str_arr, str_arr + num);
//    for(int i = 0; i < num; i++)
//    {
//        cout << str_arr[i] << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareWith(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main() {
    int size;
    cin >> size;
    vector<string> word;

    for (int i = 0; i < size; i++) {
        string str;
        cin >> str;
        if (find(word.begin(), word.end(), str) == word.end())
            word.push_back(str); // find 함수는 해당단어가 존재하지 않으면 end를 반환함
    }
    
    sort(word.begin(), word.end(), compareWith);

    for (int i = 0; i < word.size(); i++) {
        cout << word[i] << '\n';
    }

}
