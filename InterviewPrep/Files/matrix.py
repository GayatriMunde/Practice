def getSum(n, matrix, innum):
    for i in range(n):
        idx = i
        for j in range(i+1, n):
            if matrix[idx][innum] > matrix[j][innum]:
                idx = j
        matrix[i], matrix[idx] = matrix[idx], matrix[i]

    output = list()
    for i in matrix:
        total = int(0)
        for j in i:
            total += int(j)
        output.append(total)     

    return output


def take_input():
    n = int(input())
    matrix = list(list())
    for i in range(n):
        matrix.append([x for x in input().split(',')])
    innum = int(input())

    output = getSum(n, matrix, innum)
    for (i,x) in enumerate(output):
        if i != (n-1):
            print(x, end=",")
        else:
            print(x)

take_input()
