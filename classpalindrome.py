class palindrome:
    def getnumber(self,num):
        self.num = num
        self.temp = num

    def getreverse(self):
        self.reverse = 0
        
        while(self.num > 0):
            ld = self.num % 10
            self.reverse = self.reverse * 10 + ld
            self.num //=10
        

    def show(self):
        if self.temp == self.reverse:
            print("it is palindrome")
        else:
            print("it is not palindrome")

p = palindrome()
p.getnumber(121)
p.getreverse()
p.show()                
            



