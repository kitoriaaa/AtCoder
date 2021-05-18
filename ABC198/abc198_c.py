def main():
    R, X, Y = map(int, input().split())
    dist = (X**2 + Y**2)**(1/2)
    move = R
    if dist < move:
        print(2)
    else:
        dist -= 2*R
        ans = dist//move + 2
        if dist%move != 0:
            ans += 1
        print(int(ans))


if __name__ == "__main__":
    main()
