def main():

    while True:
        N = int(input())
        if N == 0:
            break

        dic = dict()

        for i in range(0,N):
            
            words = input().split(' ')
            name = words.pop(0)
            foods = words

            for i in foods:
                try:
                    dic[i]
                except:
                    dic[i] = list()

                dic[i].append(name)

        keys_list = [key for key in dic.keys()]
        keys_list.sort()

        for key in keys_list:
            names = dic[key]
            print(key,end=' ')
            names.sort()
            for name in names:
                print(name,end=' ')

            print()
        print()

main()
