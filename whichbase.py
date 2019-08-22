def main():

    for l in range(int(input())):
        k, num = input().split(' ')
        try:
            print(k,int(num,base=8),int(num),int(num,base=16))
        except:
            print(k,int(0),int(num),int(num,base=16))



main()

