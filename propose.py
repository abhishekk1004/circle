import math
from turtle import *
def heartm(k):
    return 15*math.sin(k)**3

def hearty(k):
    return 12*math.cos(k)-5*math.cos(2*k)-2*math.cos(3)
speed(10000)
bgcolor("black")
for i in range(6000):
        goto(heartm(i)*20,hearty(i)*20)
        for j in range(5):
            color("#00ffff")
goto(0,0)
done()