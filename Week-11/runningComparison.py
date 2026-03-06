t = int(input())

for _ in range(t):
    n = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    
    count = 0
    
    for i in range(n):
        if A[i] <= 2 * B[i] and B[i] <= 2 * A[i]:
            count += 1
            
    print(count)
