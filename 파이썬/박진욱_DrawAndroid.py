import turtle
import turtle as t

##전역 변수 선언##
swidth, sheight, pSize = 1000, 1000, 3


##메인 코드##
t.title('안드로이드 그리기') # 제목
t.shape('turtle') # 거북이 모양으로
t.pencolor("#11FF11") # 색상은 연두색으로
t.pensize(pSize)
t.speed(10)
t.setup(width = swidth+50, height = sheight+30)
t.screensize(swidth, sheight)
t.penup()
t.goto(-200, 200)   #몸통
t.pendown()

t.fillcolor("#11FF11")
t.begin_fill() # 색 채우기 시작
t.rt(90)
t.fd(300)
t.circle(50,90)
t.fd(50)
t.rt(90)
t.fd(100)
t.circle(50,180)
t.fd(100)
t.rt(90)
t.fd(50)
t.rt(90)
t.fd(100)
t.circle(50,180)
t.fd(100)
t.rt(90)
t.fd(50)
t.circle(50,90)
t.fd(300)
t.lt(90)
t.fd(450)
t.end_fill()

t.penup()   # 왼팔
t.goto(-300, 150)
t.pendown()
t.begin_fill()
t.circle(50,90)
t.fd(200)
t.circle(50,180)
t.fd(200)
t.circle(50,90)
t.end_fill()

t.penup()   # 오른팔
t.goto(350, 150)
t.pendown()
t.begin_fill()
t.circle(50,90)
t.fd(200)
t.circle(50,180)
t.fd(200)
t.circle(50,90)
t.end_fill()

t.penup()   # 머리
t.goto(-200, 220)
t.pendown()
t.begin_fill()
t.rt(180)
t.fd(450)
t.lt(90)
t.circle(225,180)
t.end_fill()

t.penup()   # 왼눈
t.goto(-100, 300)
t.pendown()
t.color('white')
t.begin_fill()
t.circle(10,360)
t.end_fill()

t.penup()   # 오른눈
t.goto(100, 300)
t.pendown()
t.color('white')
t.begin_fill()
t.circle(10,360)
t.end_fill()

t.penup()   # 오른뿔
t.goto(150,350)
t.pendown()
t.color("#11FF11")
t.pensize(10)
t.lt(135)
t.fd(140)

t.penup()   # 왼뿔
t.goto(-110,350)
t.pendown()
t.color("#11FF11")
t.pensize(10)
t.lt(90)
t.fd(140)

t.hideturtle()
