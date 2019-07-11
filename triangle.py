import sys, math

def func(n):

	ans = 3**(n+1) + 2**n - 1

	#to large for float...?
	ans = ans//2**n

	return ans;


def main():

	case = 1

	for line in sys.stdin:
		num = math.ceil( math.log10(func(int(line))))
		print("Case " + str(case) + ": "+ str(num))
		case += 1


main()