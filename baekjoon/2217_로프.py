n = int(input())
weight = []

for i in range(n):
    weight.append(int(input()))
    
weight.sort()

for i in range(len(weight)):
    weight[i] *= n - i
    
print(max(weight))