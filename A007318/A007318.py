def pascal(n):
    i = 1
    pm = [] * n
    while i <= n:
        pm_temp = [1 for x in range(n - (n-i))]
        if i >= 3:
            for j in range(1, len(pm_temp) - 1):
                pm_temp[j] = pm[i-2][j-1] + pm[i-2][j]
        pm.append(pm_temp)
        i += 1
    return pm

N = 10 
out = pascal(N)

for i in out:
    for j in i:
        print(j, end=" ")
print()


