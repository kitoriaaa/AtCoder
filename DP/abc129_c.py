import sys
sys.setrecursionlimit(10**9) # 最大再帰数
MOD = 10**9+7


def chmin(dp, ind, a, b):
    dp[ind] = min(a, b)


def chmax(dp, ind, a, b):
    dp[ind] = max(a, b)


def main(N, M, a):
    dp = [0]*(N+1)
    dp[0] = 1
    for i in range(1, N+1):
        if a[i]:
            dp[i] += dp[i-1]
            if i > 1:
                dp[i] += dp[i-2]
            dp[i] %= MOD
    print(dp[N])


if __name__ == "__main__":
    N, M = map(int, input().split())
    a = [True]*(N+1)
    for _ in range(M):
        tmp = int(input())
        a[tmp] = False
    main(N, M, a)
    