n = int(input())
sortDecend = []
a = 0
for i in range(n):
    a = int(input())
    sortDecend.append(a)
sortDecend.sort(reverse=True)
print("\n\n")
j = sortDecend[0]
i=0
while n >= 0:
    if sortDecend[i] == j : 
        print(sortDecend[i])
        i += 1
    elif sortDecend[i] != j :
        n -= 1
        print(sortDecend[n])
    if n <= i :
        break