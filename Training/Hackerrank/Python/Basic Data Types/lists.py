if __name__ == '__main__':
    list = []

    N = int(input())

    for i in range(0, N):
        command = input()
        commands = command.split(" ");

        if commands[0] == 'insert':
            list.insert(int(commands[1]), int(commands[2]))
        elif commands[0] == 'print':
            print(list)
        elif commands[0] == 'remove':
            list.remove(int(commands[1]))
        elif commands[0] == 'append':
            list.append(int(commands[1]))
        elif commands[0] == 'sort':
            list.sort()
        elif commands[0] == 'pop':
            list.pop()
        elif commands[0] == 'reverse':
            list.reverse()
