class Rectangle:
    def __init__(self,length,breadth):
        self.length = length
        self.breadth = breadth
        
    def dimension(self):
        print("length=",self.length)
        print("breadth=",self.breadth)

    def area(self):
        return self.length*self.breadth

    def perimeter(self):
        return 2*(self.length+self.breadth)

    def show(self):
        print("area=",self.area())
        print("perimeter=",self.perimeter())



 r1 = Rectangle(5, 5)


 r1.dimension()
 r1.show()                       