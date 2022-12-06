veri1=int(input())
toplam=0
counter2=3
counter=1
for i in range(0,veri1,2):
    toplam+=4/counter
    counter+=4

for j in range(1,veri1,2):
    toplam-=4/counter2
    counter2+=4



print(toplam)

