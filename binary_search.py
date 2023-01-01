lst=[5,11,6,9,7,55,41,37,28,15,67,95,45,91,88,33,49,51]
min=0
max=len(lst)
aranan=6
lst.sort()
print(lst)
def binary_search(lst,min,max,search):
    if len(lst)>min:
        mid=(max+min)//2
    if lst[mid]==search:
        print(" The index :",mid)
    elif lst[mid]>search:
        binary_search(lst,min,mid-1,search)
    else:
        binary_search(lst,mid+1,len(lst),search)


binary_search(lst,min,len(lst),5)
