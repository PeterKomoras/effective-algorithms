def f():

    n = int(input())

    arr = input().split()
    arr_sum = 0

    for i in range(len(arr)):
        arr[i] = int(arr[i])
        arr_sum += arr[i]

    if arr_sum % 3 != 0:
        return 0

    x = 0
    third = 0
    res = 0

    if arr_sum == 0:
        for i in range(len(arr) -1):
            x += arr[i]
            #print(arr[:i+1], " ", x, " ", third, " ", res, " ")
            if x == 0:
                third += 1
                if third > 1:
                    res += third-1
        return res

    for i in range(len(arr) -1):
        x += arr[i]
        #print(arr[:i+1], " ", x, " ", third, " ", res, " ")
        if x == arr_sum / 3:
            third += 1
        if x == arr_sum / 3 * 2:
            res += third


    return res
            
print(f())
