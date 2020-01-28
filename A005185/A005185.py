# Hofstadter Q-sequence: a(1) = a(2) = 1; a(n) = a(n-a(n-1)) + a(n-a(n-2)) for n > 2.
# https://oeis.org/A005185

# Recursive implementation for generating the Hofstadter Q-sequence.
def hof_q_recursive(n):
    if n <= 2:
        return 1
    else:
        return hof_q_recursive(n - hof_q_recursive(n - 1)) + hof_q_recursive(n - hof_q_recursive(n-2))

# Bottom-up implementation for generating the Hofstadter Q-sequence.
def hof_q_bup(n):
    mem = [None] * n
    mem[1] = 1
    mem[2] = 1
    for i in range(3, n):
        mem[i] = mem[i - mem[i-1]] + mem[i - mem[i-2]]
    return mem

# Printing N numbers from the Q-sequence. The sequence starts at 1.
N = 30

hofq_sq = hof_q_bup(N)
print("Bottom-up")
for i in range(1, N):
    print(hofq_sq[i], end=" ")
print()

print("Recursive")
for i in range(1, N):
    print(hof_q_recursive(i), end=" ")
print()
