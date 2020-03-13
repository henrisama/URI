n = int(input())

for i in range(n):
    teste = input()
    
    a = int(teste[0])
    c = int(teste[2])
    b = teste[1]
    if(a == c):
        print(a*c)
    elif(b >= 'A' and b <= 'Z'):
        print(c-a)
    else:
        print(c+a)