string1 = input()
string2 = input()

if (len(string2) > len(string1)):
    temp = string1
    string1 = string2
    string2 = temp

if (len(string2) + 1 == len(string1)):
    i = 0
    while ((string1[i] == string2[i]) and (i < len(string2))):
        i += 1

    if (i == len(string1) - 1):
        print("Tentu saja bisa!")
    else:
        end1 = string1[i+1:]
        end2 = string2[i:]

        if (end1 == end2):
            print("Tentu saja bisa!")
        else:
            print("Wah, tidak bisa :(")
else:
    print("Wah, tidak bisa :(")