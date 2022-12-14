inpt1=input()
inpt2=input()

inpt1=inpt1.split("/")
pay=int(inpt1[0])
payda=int(inpt1[1])
inpt2=inpt2.split("/")
pay2=int(inpt2[0])
payda2=int(inpt2[1])

class rational():
    def __init__(self,pay,payda):
        self.pay=pay
        self.payda=payda
    def __str__(self):
        return str(self.pay)+"/"+str(self.payda)
    def __add__(self,other):
        sumpay=(self.pay*other.payda)+(self.payda*other.pay)
        sumpayda=self.payda*other.payda
        return rational(sumpay,sumpayda)
    def __sub__(self, other):
        sumpay = (self.pay * other.payda) - (self.payda * other.pay)
        sumpayda = self.payda * other.payda
        return rational(sumpay,sumpayda)
    def __mul__(self, other):
        sumpay=self.pay*other.pay
        sumpayda=self.payda*other.payda
        return rational (sumpay,sumpayda)
    def division(self, other):
        sumpay = self.pay * other.payda
        sumpayda = self.payda * other.pay
        return rational(sumpay, sumpayda)


r1=rational(pay,payda)
r2=rational(pay2,payda2)
print(r1+r2)
print(r1-r2)
print(r1*r2)
print(rational.division(r1,r2))