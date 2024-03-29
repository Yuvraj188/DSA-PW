n=5
n+=1    
for i in range(1,n):
        for j in range(n-i-1):
            print(" ",end="")
        for k in range(n-(n-i)):
            print("#",end="")
        print("")