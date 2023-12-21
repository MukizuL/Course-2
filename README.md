[![CodeFactor](https://www.codefactor.io/repository/github/mukizul/course-2/badge)](https://www.codefactor.io/repository/github/mukizul/course-2)
# Course-2
Вариант 4
Двумерные точки: координаты (два дробных числа), цвет (строка из списка "red", "green", "blue")

Использовался Google C++ Style

![image](https://github.com/MukizuL/Course-2/assets/53896777/02bf08eb-49eb-4ed5-8203-b68987e9e8c3)


@startuml
enum color{
red blue green
}
class Point2D{
-X: int
-Y: int
-Color: color
+get_x()
+get_y()
+get_color()
+print_data()
}
color <.. Point2D
@enduml
