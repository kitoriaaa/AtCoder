def main():
    N = input()
    for i in range(10):
        add_zero = "0"*i + N
        add_zero_rev = add_zero[::-1]
        if add_zero == add_zero_rev:
            print("Yes")
            exit()
    print("No")


if __name__ == "__main__":
    main()
