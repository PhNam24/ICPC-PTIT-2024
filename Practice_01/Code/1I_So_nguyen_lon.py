# Solved by PhNam

ans = 0

while 1:
    try: 
        a = list(input().split())
        nums = []
        for i in a:
            if i.isdigit() and int(i) > 2**(31) - 1 and int(i) <= 2**64 - 1:
                nums.append(int(i))
        
        if len(nums) > 0:      
            ans += sum(nums)
    except EOFError:
        break

print(ans)
