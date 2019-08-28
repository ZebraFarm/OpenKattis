import math

def slow(n):

    fact = []
    ans = 1
    for i in range(1,7):
        ans *= i
        if n == ans:
            print(i)


def main():

    num = input()
    if len(num) < 4:
        slow(int(num))
        return


    #Idea borrowed from mpfeifer1, really neat approach... 
    #since every iteration will increase the 'size' of the input by log10(i)
    i = 1
    ans = 1.0

    while(1):
        ans += math.log10(i)

        if math.floor(ans) == len(num):
            break

        i += 1


    print(i)

    """
    THIS TIMES OUT EVEN THOUGH LOG N

    ln_num = math.log(num)

    hi = 10000000
    lo = 1
    n = (hi + lo)//2;

    h_approx = (n+1) * math.log((n+1)/math.e) + 1
    l_approx = n * math.log(n/math.e) + 1

    while(l_approx > ln_num or h_approx < ln_num):

        if(l_approx > ln_num):
            hi = n
            n = (lo + hi)//2
        else:
            lo = n
            n = (lo + hi)//2    

        h_approx = (n+1) * math.log((n+1)/math.e) + 1
        l_approx = n * math.log(n/math.e) + 1

    print(n)
    """

main()

