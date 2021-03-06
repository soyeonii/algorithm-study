import sys
from itertools import permutations

n = int(sys.stdin.readline())
data = [str(i) for i in range(1, n+1)]

results = list(permutations(data, n))

for result in results:
    print(" ".join(list(result)))