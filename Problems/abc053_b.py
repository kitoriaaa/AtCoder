s = input()

start = 0
end = 0

for i in range(len(s)):
    if s[i] == 'A':
        start = i
        break

for i in range(len(s)-1, 0 , -1):
    # if s[i] == 'Z':
    if 'Z' == s[i]:
        end = i
        break

print(end-start+1)


