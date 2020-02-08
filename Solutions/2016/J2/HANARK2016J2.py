'''
    Programmer: Hanbyul Park
    Purpose: Preparation of CCC
    About:
        Magic Squares are square arrays of numbers that have the interesting property 
        that the numbers in each column, and in each row, all add up to the same total.
        Given a 4×4 square of numbers, determine if it is magic square.
'''
def column(num):
    '''This function calculates each sum in every column'''
    c_sum = []
    a = 0
    
    for i in range(4):
        for j in range(4):
            a += int(num[i][j])

        c_sum.append(a)
        a = 0
    
    return c_sum

def row(num):
    '''This function calculates each sum in every row'''
    r_sum = []
    a = 0
    
    for i in range(4):
        for j in range(4):
            a += int(num[j][i])

        r_sum.append(a)
        a = 0
    
    return r_sum

def main():
    nums = [[0], [0], [0], [0]]
    check_count = 0

    for i in range(4):
        usr_n = input()
        nums[i] = usr_n.split()
        del(usr_n)
    
    sum_of_column = column(nums)
    sum_of_row = row(nums)

    for i in range(4):
        for j in range(4):
            if sum_of_column[i] == sum_of_row[j]:
                check_count += 1
    
    if check_count == 16:
        print("magic")
    else:
        print("not magic")

if __name__ == '__main__':
    main()

"""
Execution Results

Test case #1:	AC	[0.088s,	9.02 MB]	(0/0)
Test case #2:	AC	[0.037s,	9.02 MB]	(0/0)

Batch #3 (3/3 points)
Case #1:	AC	[0.047s,	9.02 MB]
Case #2:	AC	[0.035s,	9.02 MB]

Batch #4 (3/3 points)
Case #1:	AC	[0.043s,	9.02 MB]
Case #2:	AC	[0.044s,	9.05 MB]

Batch #5 (3/3 points)
Case #1:	AC	[0.034s,	9.02 MB]
Case #2:	AC	[0.040s,	9.02 MB]

Batch #6 (3/3 points)
Case #1:	AC	[0.036s,	9.02 MB]
Case #2:	AC	[0.036s,	9.02 MB]

Batch #7 (3/3 points)
Case #1:	AC	[0.036s,	9.02 MB]
Case #2:	AC	[0.053s,	9.02 MB]


Resources: 0.530s, 9.05 MB
Final score: 15/15 (3.0/3 points)
"""