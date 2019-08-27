def main():

    N = int(input())
    
    cups = []

    for i in range(N):
        a,b = input().split()
        
        try:
            num = int(a)//2
            col = b
        except:
            col = a
            num = int(b)

        cups.append((col,num))

    cups.sort(key = lambda tup: tup[0])
    cups.sort(key = lambda tup: tup[1])
    for i in cups:
        print(i[0])


main()

