import string

n = int(input())
search = input()

def read_state(state, ins):
    bin_str = bin(state)[2:].zfill(5)
    i = 1
    for ch in bin_str:
        if ch == "0":
            ins.append(-i)
        else:
            ins.append(i)
        i += 1

def switch(state1, state2, ins):
    bin_str = bin(state1^state2)[2:].zfill(5)
    i = 1
    for ch in bin_str:
        if ch == "1":
            ins.append(i)
        i += 1
            

for state in range(len(search)):
    for x in string.ascii_lowercase[:n]:
        ins = []
        read_state(state, ins)
        ins.append(x)

        my_chars = search[:state]+x
        new_state = 0
        for i in range(1, len(my_chars)+1):
            if my_chars[-i:] == search[:i]:
                new_state = i
        
        if new_state == len(search):
            new_state = 31
        switch(state, new_state, ins)
        print(' '.join(map(str, ins)))
