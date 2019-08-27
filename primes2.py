#python3

def is_prime(n):
  if n == 2 or n == 3:
    return True
  if n < 2 or n%2 == 0 or n%3 == 0:
    return False

  r = int(n**0.5) + 1
  f = 5
  while f <= r:
    if n%f == 0:
        return False
    if n%(f+2) == 0:
        return False
    f +=6
  return True

def main():

    n = int(input())

    for i in range(n):

        num = input()

        try:
            b = int(num, base = 2)
            if is_prime(b):
                b = 1
            else:
                b = 0
        except:
            b = -1

        try:
            o = int(num, base = 8)
            if is_prime(o):
                o = 1
            else:
                o = 0
        except:
            o = -1

        try:
            d = int(num, base = 10)
            if is_prime(d):
                d = 1
            else:
                d = 0
        except:
            d = -1

        try:
            h = int(num, base = 16)
            if is_prime(h):
                h = 1
            else:
                h = 0
        except:
            h = -1

        good = 0
        if b != -1:
            good += 1
        if o != -1:
            good += 1
        if d != -1:
            good += 1
        if h != -1:
            good += 1

        if good == 0:
            print('0/0')

        if good == 1:
            if h:
                print('1/1')
            else:
                print('0/1')

        if good == 2:
            total = d + h
            if total == 2:
                print('1/1')
            elif total == 1:
                print('1/2')
            else:
                print('0/1')

        if good == 3:
            total = o + d + h
            if total == 3:
                print('1/1')
            elif total == 2:
                print('2/3')
            elif total == 1:
                print('1/3')
            else:
                print('0/1')

        if good == 4:
            total = b + o + d + h
            if total == 4:
                print('1/1')
            elif total == 3:
                print('3/4')
            elif total == 2:
                print('1/2')
            elif total == 1:
                print('1/4')
            else:
                print('0/1')


main()

