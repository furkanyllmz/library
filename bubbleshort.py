def bubbleshort(list):
    for i in range(len(list)):
        for j in range(0,len(list)-1):
            if list[j]>list[j+1]:
                temp=list[j+1]
                list[j+1]=list[j]
                list[j]=temp
    return list

list=[-2, 45, 0, 11, -9,-31,999]
bubbleshort(list)
print(list)