num1=int(input())
comp1=int(input())
num2=int(input())
comp2=int(input())
class complex_num():
    def __init__(self,num1,comp1):
        self.num1=num1
        self.comp1=comp1

    def __str__(self):
        return str(self.num1)+"+"+str(self.comp1)+"i"

    def sum(self,other):
        sumnum=self.num1+other.num1
        subcomp=self.comp1+other.comp1
        return str(sumnum)+"+"+str(subcomp)+"i"

    def sub(self,other):
        subnum=self.num1-other.num1
        subcomp=self.comp1-other.comp1
        return str(subnum)+"+"+str(subcomp)+"i"

    def multipl(self,other):
        multiplnum=self.num1*other.num1-(self.comp1*other.comp1)
        multiplcomp=self.comp1*other.num1+(other.comp1*self.num1)
        return str(multiplnum)+"+"+str(multiplcomp)+"i"
c=complex_num(num1,comp1)
d=complex_num(num2,comp2)
print(complex_num.sub(c,d))
print(complex_num.multipl(c,d))
print(c)
print(d)


