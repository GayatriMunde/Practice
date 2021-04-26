'''
Python Program to get the nth palindrome of a given number.
An integer is a palindrome if the reverse of that number is equal to the original number.
Example of Palindromes are 11,44,101,121.
Example of nth palindrome are 
1) 2nd palindrome after 11 is 33
2) 10th palindrome after 12021 is 13031
'''

def isPalindrome(num: int) -> bool:
    return str(num) == (str(num))[::-1]

def getNthPalindrome(n: int, start: int) -> int:
    if n < 1:
        return start

    while (not isPalindrome(start + 1)):
        start += 1

    return getNthPalindrome(a, n - 1, start + 1)

if __name__ == '__main__':        
    num = eval(input('Enter Number: '))
    n = eval(input('Enter nth position: '))
    print(getNthPalindrome(0, n, num))

    