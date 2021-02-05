n = sorted(input(), reverse=True)
sum_of_n = 0

for num in n:
    sum_of_n += int(num)

if sum_of_n % 3 == 0 and n[-1] == '0':
    print(''.join(n))
else:
    print(-1)