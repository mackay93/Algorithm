//
//  main.cpp
//  바이러스
//
//  Created by 안대수 on 2021/11/17.
//

#include <iostream>
#include <queue>
#define max 101
using namespace std;

int node = 0, edge = 0, node_count = 0;
int arr[max][max];
bool visited[max];
queue<int> que;

void reset()
{
    for(int i = 0; i <= node; i++)
    {
        visited[i] = false;
    }
}

void dfs(int v)
{
    visited[v] = true;
    node_count++;
    for(int i = 1; i <= node; i++)
    {
        if(visited[i] == false && arr[v][i] == 1)
        {
            dfs(i);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> node >> edge;
    for(int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }
    dfs(1);
    cout << node_count -1;
    return 0;
}
