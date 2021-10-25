import sys
sys.setrecursionlimit(10**9) # 最大再帰数
MOD = 10**9+7


def chmin(dp, ind, a, b):
    dp[ind] = min(a, b)


def chmax(dp, ind, a, b):
    dp[ind] = max(a, b)


def main(N, h):
    dp = [float('inf')]*N
    dp[0] = 0
    for i in range(1, N):
        chmin(dp, i, dp[i], dp[i-1]+abs(h[i]-h[i-1]))
        if i > 1:
            chmin(dp, i, dp[i], dp[i-2]+abs(h[i]-h[i-2]))
    print(dp[N-1])
    

if __name__ == "__main__":
    N = int(input())
    h = list(map(int, input().split()))
    main(N, h)

