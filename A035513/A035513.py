# Wythoff array read by antidiagonals.
# https://oeis.org/A035513

import math

# Applying the fibonnaci rule for making rows.
def fib_rule(num1, num2, n):
    mem = [None]*(n+2)
    mem[0] = num1
    mem[1] = num2
    for i in range(2, n + 2):
        mem[i] = mem[i-1] + mem[i-2]
    return mem[2:]

# Makes the initial two columns necessary to build the sequence.
def two_columns(n):
    first_column = [i for i in range(n)]
    second_column = [math.floor(i * ((1 + math.sqrt(5))/2)) for i in range(1, n + 1)]
    return [first_column, second_column]

# Makes a matrix out of the combination of the two columns and the fibonacci rule.
def make_warray(n):
    columns_array = two_columns(n)
    mtx = []
    for i in range(n):
        row = fib_rule(columns_array[0][i], columns_array[1][i], n - i)
        mtx.append(row)
    return mtx

# Reads the matrix anti-diagonally.
def anti_d_parser(n):
    mtx = make_warray(n)
    sequence = []
    for k in range(0, n):
        j = k
        i = 0
        while (j >= 0):
            sequence.append(mtx[i][j])
            j -= 1
            i += 1
    return sequence

# Prints as an array, the number 8 refers to the elements of the first row.
print(anti_d_parser(8))
