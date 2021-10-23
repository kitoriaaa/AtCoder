import sys
sys.setrecursionlimit(10**9) # 最大再帰数
MOD = 10**9+7


if __name__ == "__main__":
    H, W = map(int, input().split())
    A = []
    column_list = [[] for _ in range(W)]
    for _ in range(H):
        a = list(map(int, input().split()))
        A.append(a)
    
    row = [0]*H
    column = [0]*W
    for i in range(H):
        for j in range(W):
            row[i] += A[i][j]
            column[j] += A[i][j]

    for i in range(H):
        for j in range(W):
            print(row[i] + column[j] - A[i][j], '', end='')
        print('')
