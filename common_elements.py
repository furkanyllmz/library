studentsDic={}
line=input()
lst=[]
while line!="END":
  y=line.split(":")
  y[1]=y[1].strip()
  y1L=list(y[1].split(","))
  studentsDic.update({y[0]:y1L})
  lst.append(y[0])
  line=input()
lst1=[]

def fonc(studentsDic):
    for x in studentsDic.keys():
        for j in studentsDic[x]:
            j=j.split("/")
            j[1]=j[1].strip()
            j[0]=j[0].strip()
            if j[0]==j[1]:
                T=True
            else:
                T=False
                break
        if T==True:
            lst1.append(x)

    return lst1

z=fonc(studentsDic)
print(z)



