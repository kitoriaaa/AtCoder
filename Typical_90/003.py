from typing import List
from collections import deque

MOD = 10**9+7


# s is start vertex
def bfs(N, graph, s):
    dist = [-1]*N
    dist[s] = 0
    d = deque()
    d.append(s)

    while d:
        v = d.popleft()
        for i in graph[v]:
            if dist[i] != -1:
                continue
            dist[i] = dist[v]+1
            d.append(i)
    return dist


if __name__ == "__main__":
    N = int(input())
    # N, M = map(int, input().split())
    graph = [[] for _ in range(N)]
    for _ in range(N-1):
        # if exist edge weight
        # a, b, w = map(int, input().split())
        # to_edge = [b-1, w]
        # back_edge = [a-1, w]
        # graph[a-1].append(to_edge)
        # graph[b-1].append(back_edge)

        a, b = map(int, input().split())
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)

    tmp = bfs(N, graph, 0) # 0からの距離
    start = tmp.index(max(tmp)) # 0から最も遠い町をスタートとする
    tmp = bfs(N, graph, start) # スタートから最も遠い点が最長の距離
    cost = max(tmp)+1

    print(cost)
