import string

def print_rangoli(n):
    alphabet = list(string.ascii_lowercase)[:n]

    width = (n - 1) * 4 + 1

    lines = []
    lines.append(alphabet[n - 1].center(width, '-'))

    for i in range(1, n):
        leftWing = alphabet[n - i:]
        leftWing.reverse()
        lines.append("-".join(leftWing + alphabet[n - i -1:]).center(width, '-'))

    bottomLines = lines[:n-1]
    bottomLines.reverse()

    print('\n'.join(lines + bottomLines))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)