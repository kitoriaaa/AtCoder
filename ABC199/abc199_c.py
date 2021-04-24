N = int(input())
S = input()
Q = int(input())
query_list = [list(map(int, input().split())) for _ in range(Q)]

ans_s = ['' for _ in range(N*2)]
ind_first_list = [i for i in range(N)]
ind_last_list = [i for i in range(N, 2*N)]

for query in query_list:
    T = query[0]
    A = query[1]
    B = query[2]
    if T == 1:
        is_a_first = True
        is_b_first = True
        if A > N:
            ind_A = ind_last_list[A-N-1]
            is_a_first = False
        else:
            ind_A = ind_first_list[A-1]
        if B > N:
            ind_B = ind_last_list[B-N-1]
            is_b_first = False
        else:
            ind_B = ind_first_list[B-1]

        if is_a_first:
            ind_first_list[A-1] = ind_B
        else:
            ind_last_list[A-N-1] = ind_B
        
        if is_b_first:
            ind_first_list[B-1] = ind_A
        else:
            ind_last_list[B-N-1] = ind_A

    elif T == 2:
        tmp_first = ind_first_list
        ind_first_list = ind_last_list
        ind_last_list = tmp_first
    
for i in range(N):
    ans_s[i] = S[ind_first_list[i]]

for i in range(N, N*2):
    ans_s[i] = S[ind_last_list[i-N]]

print("".join(ans_s))


