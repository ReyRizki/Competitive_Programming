from collections import OrderedDict 

def removeDupWithOrder(str): 
    return "".join(OrderedDict.fromkeys(str))  

def wrap(s, w):
    return [s[i:i + w] for i in range(0, len(s), w)]

def merge_the_tools(string, k):
    print("\n".join([removeDupWithOrder(substring) for substring in wrap(string, k)]))

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)