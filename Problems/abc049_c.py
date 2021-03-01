s = input()
t = ''

s = s[::-1]

dream = "dream"
dream_r = dream[::-1]
dreamer = "dreamer"
dreamer_r = dreamer[::-1]
erase = "erase"
erase_r = erase[::-1]
eraser = "eraser"
eraser_r = eraser[::-1]

result = True

while len(s):
    c = s[0]
    if c == 'r':
        if len(s) >= 6 and s[:6] in eraser_r:
            s = s[6:]
        elif len(s) >= 7 and s[:7] in dreamer_r:
            s = s[7:]
        else:
            result = False
            break
    elif c == 'm':
        if len(s) >= 5 and s[:5] in dream_r:
            s = s[5:]
        else:
            result = False
            break
    elif c == 'e':
        if len(s) >= 5 and s[:5] in erase_r:
            s = s[5:]
        else:
            result = False
            break
    else:
        result = False
        break


if result:
    print("YES")
else:
    print("NO")

# dream 5
# dreamer 7
# erase 5
# eraser 6

