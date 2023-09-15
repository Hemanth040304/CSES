n=int(input())
arr=list(map(int,input().split()))
N=n-1
temp = [0] * (N+1)
 
for i in range(0, N):
    temp[arr[i] - 1] = 1
 
for i in range(0, N+1):
    if(temp[i] == 0):
        ans = i + 1
print(ans)
