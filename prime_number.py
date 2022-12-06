veri1=int(input())

def prime_calc(veri1):
    counter=0
    for i in range(2,veri1-1):
        if veri1%i==0:
            counter+=1
    if counter>0 or veri1<=0 or veri1==1:
        print("Not Prime Number")
    else:
        print("Prime number")


prime_calc(veri1)