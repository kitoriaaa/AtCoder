import sys
sys.setrecursionlimit(10**9)
MOD = 10**9+7


next_step = [[-1, 0], [0, -1], [1, 0], [0, 1]]

def dfs(graph, seen, h, w):
    seen[h][w] = True

    for step in next_step:
        nexth = h + step[0]
        nextw = w + step[1]

        if nexth >= H or nexth < 0 or nextw < 0 or nextw >= W or seen[nexth][nextw]:
            continue
        c = graph[nexth][nextw]
        if c == '#':
            continue
        else:
            dfs(graph, seen, nexth, nextw)
 

if __name__ == "__main__":
    H, W = map(int, input().split())
    graph = []
    for _ in range(H):
        line = input()
        graph.append(line)

    for h in range(H):
        for w in range(W):
            if graph[h][w] == 's':
                sh = h
                sw = w
            elif graph[h][w] == 'g':
                gh = h
                gw = w
 
    seen = [[False]*W for _ in range(H)]

    dfs(graph, seen, sh, sw)
    if seen[gh][gw]:
        print("Yes")
    else:
        print("No")

