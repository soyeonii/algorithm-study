num = 1

while True:
    l, p, v = map(int, input().split())
    
    if l == p == v == 0:
        break
        
    print('Case {}: {}'.format(num, v // p * l + min(l, v % p)))
    num += 1