def getSecondLowestScore(arr):
    arr = removeDuplicates(arr)
    arr.sort()

    return arr[1]

def removeDuplicates(arr):
    return list(dict.fromkeys(arr))

if __name__ == '__main__':
    students = []

    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])

    # print([student[1] for student in students])

    secondLowestScore = getSecondLowestScore([student[1] for student in students])

    result = [student[0] for student in students if student[1] == secondLowestScore]
    result.sort()

    for student in result:
        print(student)
    # print(result)