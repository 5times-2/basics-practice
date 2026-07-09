class Dog:                              # class
    def __init__(self, name, age):      # 建構子 (__init__)
        self.name = name                # self 參考物件本身
        self.age = age

    def bark(self):                     # method
        print(f"{self.name} 汪汪叫！")

d = Dog("小黑", 3)                      # 建立object
d.bark(d)                               # 呼叫method
print(f"{d.name} 今年 {d.age} 歲")      # 存取attribute
