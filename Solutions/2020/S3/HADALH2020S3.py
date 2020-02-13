needle = input()
haystack = input()


def remove_duplicates(list):
    newlist = []
    for item in list:
        if item not in newlist:
            newlist.append(item)

    return newlist


alphabet_deafult = {'a':0, 'b':0, 'c':0, 'd':0,'e':0,'f':0,'g':0,
            'h':0,'i':0,'j':0,'k':0,'l':0,'m':0,'n':0,'o':0,
            'p':0,'q':0,'r':0,'s':0,'t':0,'u':0,'v':0,'w':0,'x':0,'y':0,'z':0}

alphabet_needle = alphabet_deafult
alphabet_subset = alphabet_deafult

for letter in needle:
    alphabet_needle[letter] += 1


n_len = len(needle)
length = len(haystack) - n_len + 1
subsets = []
for counter in range(length):
    current = haystack[counter:counter+n_len]
    subsets.append(current)

subsets = remove_duplicates(subsets)

counter = 0

used_perms = []

for word in subsets:
    alphabet_subset = {'a':0, 'b':0, 'c':0, 'd':0,'e':0,'f':0,'g':0,
                    'h':0,'i':0,'j':0,'k':0,'l':0,'m':0,'n':0,'o':0,
                    'p':0,'q':0,'r':0,'s':0,'t':0,'u':0,'v':0,'w':0,'x':0,'y':0,'z':0}

    for letter in word:
        alphabet_subset[letter] += 1

    if alphabet_subset == alphabet_needle and (word not in used_perms):
        counter += 1
        used_perms.append(word)


print(counter)
