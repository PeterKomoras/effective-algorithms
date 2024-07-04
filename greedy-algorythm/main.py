n = int(input())


for i in range(n):
    a,b = input().split()
    a = int(a)
    b = int(b)
    res = 0
    mine = input()
    last = ''
    distance = 0
    isFired = False
    for i in mine:
        if i == '0':
            distance += 1
            last = '0'
                
        # i = '1'
        elif not isFired:
            isFired = True
            res += a
            last = '1'
            distance = 0
        elif last == '0':
            if a <= b * distance:
                res += a
            else:
                res += b * distance
            distance = 0
            last = '1'

    print(res)
