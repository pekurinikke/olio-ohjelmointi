#include <iostream>

#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main()
{
    // ---- Car pinomuistiin ----
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    car.printData();

    // ---- Rectangle pinomuistiin ----
    Rectangle rect;
    rect.setWidth(5.0);
    rect.setHeight(3.0);

    std::cout << "Area: " << rect.getArea() << std::endl;
    std::cout << "Circumference: " << rect.getCircum() << std::endl;

    // ---- Student pinomuistiin ----
    Student student;
    student.setName("Matti Meikäläinen");
    student.setStudentNumber(12345);
    student.setAverage(8.75);

    std::cout << "Student name: " << student.getName() << std::endl;
    std::cout << "Student number: " << student.getStudentNumber() << std::endl;
    std::cout << "Average: " << student.getAverage() << std::endl;

    return 0;
}
