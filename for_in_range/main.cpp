#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <list>

// 自定义结构体示例
struct Student {
    std::string name;
    int score;
    
    // 构造函数
    Student(std::string n, int s) : name(n), score(s) {}
};

int main() {
    // 1. 基本用法：遍历基本类型的容器
    // 遍历vector<int>
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    std::cout << "遍历vector<int>中的元素: ";
    // 使用const引用避免不必要的复制，适合只读访问
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    // 2. 遍历C风格数组
    const char* fruits[] = {"apple", "banana", "cherry", "date"};
    std::cout << "遍历C风格字符串数组: ";
    // 直接使用值类型遍历（对于小型数据类型）
    for (const char* fruit : fruits) {
        std::cout << fruit << " ";
    }
    std::cout << "\n\n";
    
    // 3. 遍历并修改元素
    std::array<double, 4> values = {1.1, 2.2, 3.3, 4.4};
    std::cout << "修改前的array: ";
    for (const auto& val : values) {
        std::cout << val << " ";
    }
    std::cout << "\n";
    
    // 使用引用修改元素值
    for (double& val : values) {
        val *= 2;  // 每个元素乘以2
    }
    
    std::cout << "修改后的array: ";
    for (const auto& val : values) {
        std::cout << val << " ";
    }
    std::cout << "\n\n";
    
    // 4. 遍历字符串（字符序列）
    std::string message = "Hello, World!";
    std::cout << "字符串中的每个字符: ";
    for (char c : message) {
        std::cout << "'" << c << "' ";
    }
    std::cout << "\n\n";
    
    // 5. 遍历自定义结构体容器
    std::list<Student> students;
    students.emplace_back("Alice", 90);
    students.emplace_back("Bob", 85);
    students.emplace_back("Charlie", 95);
    
    std::cout << "学生信息列表: \n";
    for (const Student& s : students) {
        std::cout << "姓名: " << s.name << ", 分数: " << s.score << "\n";
    }
    std::cout << "\n";
    
    // 6. 结合auto关键字简化代码
    // auto会自动推导元素类型
    std::vector<std::pair<std::string, int>> pairs = {
        {"one", 1}, {"two", 2}, {"three", 3}
    };
    
    std::cout << "遍历pair容器: \n";
    for (const auto& p : pairs) {  // auto推导出类型为std::pair<std::string, int>
        std::cout << p.first << ": " << p.second << "\n";
    }
    std::cout << "\n";
    
    // 7. 忽略元素值的遍历（仅需要执行特定次数）
    std::vector<int> dummy(5);  // 包含5个默认值为0的元素
    std::cout << "执行5次循环: ";
    for ([[maybe_unused]] const auto& ignored : dummy) {
        std::cout << "* ";
    }
    std::cout << "\n";
    
    return 0;
}
    