import sys

def fact(n):
	fac = 1
	for i in range(1,n+1):
		fac *= i

	return fac;

def anagram(word):
	
	used = [0]
	used *= 52

	for i in word:
		if ord(i) >= ord('a'):
			used[ord(i)-ord('a')] += 1	
		else:
			used[26 + ord(i) - ord('A')] += 1

	ans = fact(len(word))

	for i in used:
		ans = ans//fact(i)

	return ans

def main():
	for line in sys.stdin:
		line = line[:len(line)-1]
		print(anagram(line))

main()