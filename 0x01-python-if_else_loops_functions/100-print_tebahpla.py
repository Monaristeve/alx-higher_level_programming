#!/usr/bin/python3
for j in range(ord('z'), ord('a') - 1, -1):
    if j % 2 == 0:
        difference = 0
    else:
        difference = 32
    print('{}'.format(chr(j - difference)), end='')
