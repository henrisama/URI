while(1):
    h1, m1, h2, m2 = input().split(' ')
    h1 = int(h1)
    m1 = int(m1)
    h2 = int(h2)
    m2 = int(m2)
    
    if(h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0):
        break

    a = (h1*60) + m1
    b = (h2*60) + m2

    if(a < b):
        print(abs(a-b))
    else:
        print(abs((a-b) - 1440))