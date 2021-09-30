MOD = 10**9+7

def solve() -> None:
    print(binary_search())


def binary_search() -> int:
    left = -1
    right = L + 1
    while (right - left) > 1:
        mid = (right + left) // 2
        if div_check(mid):
            left = mid
        else:
            right = mid
    return left


def div_check(threshold) -> bool:
    length = 0
    res = True
    cnt = 0
    for i in range(N):
        if (A_list[i] - length >= threshold) and (L - A_list[i] >= threshold):
            cnt += 1
            length = A_list[i]
    if cnt < K:
        res = False
    return res


if __name__ == "__main__":
    N, L = map(int, input().split())
    K = int(input())
    A_list = list(map(int, input().split()))
    solve()
