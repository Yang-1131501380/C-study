#include <iostream>  
#include <string>  

// 定义第一个命名空间，负责数学相关操作
//hello  niohao
namespace Math {  
    // 函数：计算一个数的平方
    int square(int x) {  
        return x * x;  
    }  

    // 函数：计算一个数的立方  
    int cube(int x) {  
        return x * x * x;  
    }  

    // 函数：计算一个数的绝对值  
    int absolute(int x) {  
        return (x < 0) ? -x : x;  
    }  
}  

// 定义第二个命名空间，负责几何形状的计算  
namespace Geometry {  
    // 常量 PI，用于计算圆的面积  
    const double PI = 3.14159;  

    // 函数：计算圆的面积  
    double areaOfCircle(double radius) {  
        return PI * Math::square(radius); // 调用 Math 命名空间中的 square 函数  
    }  

    // 函数：计算矩形的面积  
    double areaOfRectangle(double width, double height) {  
        return width * height;  
    }  
}  

// 定义第三个命名空间，用于学校相关的操作  
namespace School {  
    // 类：学生类，表示一个学生的基本信息  
    class Student {  
    private:  
        std::string name;  
        int age;  

    public:  
        // 构造函数  
        Student(std::string n, int a) : name(n), age(a) {}  

        // 方法：显示学生信息  
        void displayInfo() {  
            std::cout << "Name: " << name << ", Age: " << age << std::endl;  
        }  
    };  
}  

// 全局函数，打印程序信息  
void showInfo() {  
    std::cout << "This program demonstrates the use of namespaces in C++." << std::endl;  
}  

int main() {  
    // 调用全局函数  
    showInfo();  
    
    // 使用 Math 命名空间  
    int number = -4;  
    std::cout << "The square of " << number << " is: " << Math::square(number) << std::endl;  
    std::cout << "The cube of " << number << " is: " << Math::cube(number) << std::endl;  
    std::cout << "The absolute value of " << number << " is: " << Math::absolute(number) << std::endl;  

    // 使用 Geometry 命名空间  
    double radius = 3.0;  
    std::cout << "The area of a circle with radius " << radius << " is: " << Geometry::areaOfCircle(radius) << std::endl;  

    double width = 5.0, height = 4.0;  
    std::cout << "The area of a rectangle with width " << width << " and height " << height   
              << " is: " << Geometry::areaOfRectangle(width, height) << std::endl;  

    // 使用 School 命名空间  
    School::Student student("Alice", 20);  
    student.displayInfo(); // 显示学生信息  

    return 0;  
}