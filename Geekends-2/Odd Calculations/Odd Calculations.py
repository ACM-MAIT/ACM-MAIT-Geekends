#python2
import math

n = int(raw_input())
op_dict = {1:0}
op_list = [n]

def cal(n):
    global op_dict
    for i in range(2,n+1):
        op1 = op2 = math.pow(10,6)
        if i%3 == 0:
            op1 = op_dict[i/3] + 1
        if i%2 == 0:
            op2 = op_dict[i/2] + 1

        op3 = op_dict[i-1] + 1
        
        op_dict[i] = min(op1,op2,op3)
    return op_dict[n]
    
print cal(n)

while n!= 1:
    min1 = min2 = min3 = math.pow(10,6)
    if n%3 == 0:
        min1 = op_dict[n/3]
    if n%2 == 0:
        min2 = op_dict[n/2]
    min3 = op_dict[n-1]
    
    Min = min(min1,min2,min3)
    
    if Min == min1:
        n = n/3
    elif Min == min2:
        n = n/2
    else:
        n = n-1
        
    op_list.append(n)
    
for num in sorted(op_list):
    print num,
    
    
