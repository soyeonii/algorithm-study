n = int(input())
p = sorted(list(map(int, input().split())))
sum_of_time = 0

for i in range(len(p)):
    sum_of_time += p[i] * (n - i)
    
print(sum_of_time)