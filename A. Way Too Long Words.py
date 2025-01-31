t = input() # test case 
test = int(t)

for x in range(0,test):
    s = input() # input the string ;
    size = len(s) # size of the string 
    sizeMinus = str(size - 2 )
    first = s[0] 
    last = s[size-1]
    
    if size > 10:
        print ( first+sizeMinus+last )
    else:
        print ( s ) 