from math import sqrt
m = 3
n = 4

maze = [[3, 10, 8, 14], [1, 11, 12, 12], [6, 2, 3, 9]]


def factor(num):
    limit = round(sqrt(num)+1)
    factors = []

    for counter in range(1, limit):
        if num % counter == 0:
            current = [counter, num//counter]
            factors.append(current)

    print(factors)

    return factors


def path(p1, p2):
    value = maze[p1-1][p2-1]
    print(value)

    if m*n == value:
        print("yes")
        return "yes"
    else:
        newpos = factor(value)
        for pos in newpos:
            if pos[0] <= m and pos[1]<=n:
                path(pos[0], pos[1])



path(1, 1)
