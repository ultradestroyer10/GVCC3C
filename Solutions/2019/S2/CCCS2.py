list1 = []
numb = int((input()))
for i in range(numb):
    list1.append(int(input()))

list2 = [i * 2 for i in list1]
l2 = sorted(set(list2),key=list2.index)

primes = []
for i in range(2, max(l2) + 1):
    for j in range(2, i // 2 + 1):
        if i % j == 0:
            break
    else:
        primes.append(i)
for i in l2:
    for j in primes:
        if i - j in primes:
            print("%d %d" % (j, i-j))
            break