import sys

count_0 = [1, 0]
count_1 = [0, 1]

t = int(sys.stdin.readline())
for _ in range(t):
    n = int(sys.stdin.readline())
    length = len(count_0)
    if length <= n:
        for i in range(length, n + 1):
            count_0.append(count_0[i - 1] + count_0[i - 2])
            count_1.append(count_1[i - 1] + count_1[i - 2])
    print(count_0[n], count_1[n])