import sys
# from itertools import combinations

height = []

for _ in range(9):
    height.append(int(sys.stdin.readline()))

height.sort()

for i in range(9):
    for j in range(i+1, 9):
        if height[i] + height[j] == sum(height) - 100:
            for k in range(9):
                if k != i and k != j:
                    print(height[k])
            sys.exit()

# pairs = combinations(height, 2)
# for pair in pairs:
#     if sum(pair) == sum(height) - 100:
#         for i in range(9):
#             if not height[i] in pair:
#                 print(height[i])
#         sys.exit()