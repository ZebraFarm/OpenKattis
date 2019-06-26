

def main():
	N = int(input())

	while(N!=0):
		N -= 1

		input()
		
		sum=0
		n = int(input())
		for i in range(n) :
			sum += int(input())

		if sum%n == 0 :
			print("YES")
		else:
			print("NO")

main()