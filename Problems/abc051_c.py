sx, sy, tx, ty = map(int, input().split())

route = ''
move_x = 0
move_y = 0
for i in range(tx-sx):
    route += 'R'
    move_x += 1
for i in range(abs(ty-sy)):
    route += 'U'
    move_y += 1

route += 'L'*move_x
route += 'D'*move_y

route += 'D'
route += 'R'*(move_x + 1)
route += 'U'*(move_y + 1)
route += 'L'

route += 'U'
route += 'L'*(move_x + 1)
route += 'D'*(move_y + 1)
route += 'R'

print(route)
