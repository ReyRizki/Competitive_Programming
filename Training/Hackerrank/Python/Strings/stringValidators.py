if __name__ == '__main__':
    s = input()

    validator = {
        'alnum': False,
        'alpha': False,
        'digit': False,
        'lower': False,
        'upper': False
    }

    for c in s:
        if validator['alnum'] == False :
            validator['alnum'] = c.isalnum()

        if validator['alpha'] == False :
            validator['alpha'] = c.isalpha()

        if validator['digit'] == False :
            validator['digit'] = c.isdigit()

        if validator['lower'] == False :
            validator['lower'] = c.islower()

        if validator['upper'] == False :
            validator['upper'] = c.isupper()

    for attribute in validator:
        print(validator[attribute])
