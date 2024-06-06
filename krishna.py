from sketchpy import canvas
from turtle import Screen
s =Screen()
s.bgcolor("Black")

ab=canvas.sketch_from_svg("shreehari.svg",scale=15)
ab.draw()