def main():
	n = int(input())
	fact = 1

	euler = 1.0

	if n == 0:
		print(1)
		return

	for i in range(1,min(n+1,40)):
		fact *= i
		euler += 1.0/fact

	print(euler)


main()