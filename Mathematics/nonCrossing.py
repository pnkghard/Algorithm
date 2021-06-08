def dp(n):
    c = [1 for i in range(n+1)]
    for i in range(2, n+1):
        c[i]=0
        for j in range(i):
            c[i]+=(c[j]*c[i-j-1])
    return c[n]

def countWay(n):
    if (n & 1):
        print("Invalid")
        return 0
    return dp(n // 2)

n = int(input())
print(countWay(n))