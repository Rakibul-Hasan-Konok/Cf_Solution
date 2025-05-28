import math 
test=int(input());
for i in range(test):
    s=int(input())
    ss = int(math.sqrt(s));
    if ss*ss == s:
        print(ss//2,ss-ss//2)
    else:
        print("-1")

