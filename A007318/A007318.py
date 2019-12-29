# Pascal's triangle read by rows: C(n,k) = binomial(n,k) = n!/(k!*(n-k)!), 0 <= k <= n.
# https://oeis.org/A007318

# Algorithm to calculate Pascal's numbers given the number of rows (n),
# and returns a matrix (pm) with the 'triangles' rows and columns.
def pascal(n):
    # Initializes a matrix (pm) that has n rows.
    i = 1
    pm = [] * n
    while i <= n:
        # Adds the columns to the matrix (pm), each row has an increasing number of columns and they are initialized with the value 1.
        pm_temp = [1 for x in range(n - (n-i))]
        # Implements the addition of two pairs of numbers.
        if i >= 3:
            for j in range(1, len(pm_temp) - 1):
                pm_temp[j] = pm[i-2][j-1] + pm[i-2][j]
        pm.append(pm_temp)
        i += 1
    return pm


# Prints out the 10 rows of the Pascal's triangle
N = 10 
out = pascal(N)

for i in out:
    for j in i:
        print(j, end=" ")
print()


