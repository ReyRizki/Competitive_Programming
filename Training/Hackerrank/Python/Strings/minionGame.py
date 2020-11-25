def minion_game(string):
    vowel = "AEIOU"

    stuartScore = 0
    kevinScore = 0

    stringLength = len(string)
    for i in range(stringLength):
        if string[i] in vowel:
            kevinScore += stringLength - i
        else:
            stuartScore += stringLength - i

    if kevinScore > stuartScore:
        print("Kevin", kevinScore)
    elif stuartScore > kevinScore:
        print("Stuart", stuartScore)
    else:
        print("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)