#python2

n,W = map(int,raw_input().strip().split())
item_list = [ map(int,raw_input().strip().split()) for _ in range(n) ]
item_list.sort( reverse = True, key = lambda item : (float(item[0])/item[1]) )

def loot(W,item_list):
    V = 0
    for i in range(len(item_list)):
        if W == 0:
            break
        else:
            a = min(item_list[i][1], W)
            V = V + a*(float(item_list[i][0])/item_list[i][1])
            W = W - a
    return ("%.4f" % V)     
    

print loot(W,item_list)


