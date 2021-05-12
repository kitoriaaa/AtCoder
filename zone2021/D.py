from collections import deque

S = input()
T = deque()
flg = False

for c in S:
    if c == 'R':
        flg = not flg
    else:
        if flg:
            if len(T) >= 1 and T[0] == c:
                T.popleft()
                continue
            T.appendleft(c)
        else:
            if len(T) >= 1 and T[-1] == c:
                T.pop()
                continue
            T.append(c)
    
if flg:
    T = reversed(T)
    
print("".join(T))