# Solved by PhNam

s = input()

d = {}

m = int(input())
a = list(map(int, input().split()))

for i in range(len(s)):
    d[i] = 0

for i in a:
    idx = i - 1
    idx2 = len(s) - 1 - idx
    d[idx] += 1
    d[idx2] += 1

ans = ""
cnt = [0] * len(s)

if d[0] == 0:
    cnt[0] = cnt[len(s) - 1] = 0
else:
    cnt[0] = cnt[len(s) - 1] = d[0]

n = 0
if len(s) % 2:
    n = len(s) // 2 + 1
else:
    n = len(s) // 2

for i in range(1, n):
    if (d[i] != 0):
        cnt[i] = cnt[i - 1] + d[i]
    else:
        cnt[i] = cnt[i - 1]
    cnt[len(s) - i - 1] = cnt[i]

for i in range(len(s)):
    if cnt[i] % 2:
        ans += s[len(s) - i - 1]
    else:
        ans += s[i]
        
print(ans)