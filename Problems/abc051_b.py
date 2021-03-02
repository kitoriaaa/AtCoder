#! /usr/bin/python3

def main():
    K, S = map(int, input().split())

    cnt = 0
    for i in range(K+1):
        for j in range(K+1):
            z = S-i-j
            if z <= 0 and z <= K:
                cnt += 1

    print(cnt)

if __name__ == "__main__":
    main()
