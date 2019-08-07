def main():
    Case = int(input())

    fact = []

    ans = 1
    for i in range(1,10001):
        ans *= i
        fact.append(ans)

    while(Case):
        Case -= 1

        n = int(input())
        if n == 0:
            print(1)
        print(fact[2*n-1] // ((fact[n-1] ** 2 ) * (n+1)))

main()