fact = []

def Cn(n):

    global fact

    if n == 0:
        return 1

    return fact[2*n-1] // ((fact[n-1] ** 2 ) * (n+1))

def main():

    global fact

    ans = 1
    for i in range(1,10001):
        ans *= i
        fact.append(ans)
    
    n = int(input())
    if n == 0:
        print(1)
        return

    Sn = 0
    for i in range(0,(n+1)//2):
        Sn += Cn(i) * Cn(n-i)

    Sn *= 2

    if n % 2 == 0:
        Sn += Cn(n//2) ** 2 


    print(Sn)

main()
