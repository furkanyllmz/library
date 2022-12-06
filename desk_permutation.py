desk_input=input()
#inputexample=totaldesk,filleddesk
lst=desk_input.split(",")


lst1=[]
def place_student(lst):
    counter=0
    for i in range(1,lst[0]+1):
        lst1.append(i)
    for j in range(len(lst)-1):
        lst1.remove(lst[j+1])
    for k in lst1:
        if k%2==1 and k+1 in lst1 :
            counter+=1
        if k%2==1 and k+2 in lst1:
            counter+=1
        if k%2==0 and k+2 in lst1:
            counter+=1

    return counter

d=place_student([50])
print(d)