import sys
sys.setrecursionlimit(10**9) # 最大再帰数
MOD = 10**9+7


def chmin(dp, ind, a, b):
    dp[ind] = min(a, b)


def chmax(dp, ind, a, b):
    dp[ind] = max(a, b)


def main(N, K, h):
    dp = [float('inf')]*N
    dp[0] = 0
    for i in range(1, N):
        for skip in range(1, K+1):
            if i-skip >= 0:
                chmin(dp, i, dp[i], dp[i-skip]+abs(h[i]-h[i-skip]))
    print(dp[N-1])



if __name__ == "__main__":
    N, K = map(int, input().split())
    h = list(map(int, input().split()))
    main(N, K, h)
