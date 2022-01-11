//
//  main.cpp
//  DFS와 BFS
//
//  Created by 안대수 on 2021/11/16.
//

#include <iostream>
#include <queue>
#include <memory>
#define MAX 1001
using namespace std;

int node = 0, edge = 0, v = 0;
int arr[MAX][MAX];
bool visited[MAX];
queue<int> que;

void reset()
{
    for(int i = 0; i <= node; i++)
    {
        visited[i] = false;
    }
}

void dfs(int vertex)
{
    visited[vertex] = true;
    cout << vertex << " ";
    for(int i = 1; i <= node; i++)
    {
        if(visited[i] == false && arr[vertex][i] == 1)
        {
            dfs(i);
        }
    }
}

void bfs(int vertex)
{
    que.push(vertex);
    visited[vertex] = true;
    cout << vertex << " ";
    while(!que.empty()) // 큐가 다 비워질때까지 실행된다.
    {
        vertex = que.front();
        que.pop();
        for(int i = 1; i <= node; i++)
        {
            if(arr[vertex][i] == 1 && visited[i] == false)
            {
                que.push(i);
                visited[i] = true;
                cout << i << " ";
            }
        }
    }
    
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> node >> edge >> v;
    for(int i = 0; i < edge; i++)
    {
        int a,b;
        cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;  //서로 연결되어있다는걸 1로 표현한다.
    }
    reset();
    dfs(v);
    cout << "\n";
    reset();
    bfs(v);
    return 0;
}
