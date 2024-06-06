from sketchpy import canvas
from turtle import Screen
s =Screen()
s.bgcolor("Black")

ab=canvas.sketch_from_svg("shivjibaba.svg",scale=25)
ab.draw()