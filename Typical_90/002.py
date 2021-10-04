from typing import List

MOD = 10**9+7

def solve(N) -> None:
    bit_search(N)


def bit_search(N):
    for bit in range(2**N):
        string = ""
        left = 0
        right = 0
        flg = True
        for i in range(N-1, -1, -1):
            if not bit & (1 << i):
                string += "("
                left += 1
            else:
                string += ")"
                right += 1
            if left < right:
                flg = False
                break
        # check
        if (left == right) and flg:
            print(string)


def bit_search_base(N) -> List[int]:
    res = []
    # 2**len(N) = 8
    #  0,   1,   2,   3,   4,   5,   6,   7
    # 000, 001, 010, 011, 100, 101, 110, 111
    for bit in range(2**len(N)):
        # le(N) = 3
        # 0, 1, 2
        tmp = []
        for i in range(len(N)):
            if bit & (1 << i):
                tmp.append(N[i])
        res.append(tmp)
    return res


if __name__ == "__main__":
    N = int(input())
    solve(N)
