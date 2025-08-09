#include <iostream>
#include <vector>
#include <array>
#include <algorithm> // 包含sort函数
#include <string>

// 自定义结构体示例
struct Person {
    std::string name;
    int age;
    
    // 构造函数，方便初始化
    Person(std::string n, int a) : name(n), age(a) {}
};

// 自定义比较函数 - 按年龄升序排序
bool compareByAge(const Person& a, const Person& b) {
    return a.age < b.age;
}

// 自定义比较函数 - 按姓名长度降序排序
bool compareByNameLength(const Person& a, const Person& b) {
    return a.name.length() > b.name.length();
}

int main() {
    // 1. 对基本类型数组排序
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int arraySize = sizeof(intArray) / sizeof(intArray[0]);
    
    // 排序整个数组（默认升序）
    std::sort(intArray, intArray + arraySize);
    
    std::cout << "排序后的int数组: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << "\n\n";
    
    // 2. 对vector容器排序
    std::vector<std::string> strVector = {"apple", "banana", "cherry", "date"};
    
    // 排序vector（默认按字典序）
    std::sort(strVector.begin(), strVector.end());
    
    std::cout << "排序后的string vector: ";
    for (const std::string& s : strVector) {
        std::cout << s << " ";
    }
    std::cout << "\n\n";
    
    // 3. 对部分元素排序
    std::array<double, 7> doubleArray = {3.14, 1.59, 2.65, 0.78, 9.23, 5.55, 4.12};
    
    // 只排序从第2个到第5个元素（索引1到4，因为end是排他的）
    std::sort(doubleArray.begin() + 1, doubleArray.begin() + 5);
    
    std::cout << "部分排序后的double array: ";
    for (double d : doubleArray) {
        std::cout << d << " ";
    }
    std::cout << "\n\n";
    
    // 4. 使用自定义比较函数排序
    std::vector<Person> people;
    people.emplace_back("Alice", 30);
    people.emplace_back("Bob", 25);
    people.emplace_back("Charlie", 35);
    people.emplace_back("David", 28);
    
    // 按年龄升序排序
    std::sort(people.begin(), people.end(), compareByAge);
    
    std::cout << "按年龄升序排序的人员列表: \n";
    for (const Person& p : people) {
        std::cout << p.name << " (" << p.age << "岁) ";
    }
    std::cout << "\n\n";
    
    // 5. 使用lambda表达式作为比较函数
    std::sort(people.begin(), people.end(), 
              [](const Person& a, const Person& b) {
                  // 按姓名字典序降序排序
                  return a.name > b.name;
              });
    
    std::cout << "按姓名降序排序的人员列表: \n";
    for (const Person& p : people) {
        std::cout << p.name << " (" << p.age << "岁) ";
    }
    std::cout << "\n\n";
    
    // 6. 降序排序（使用标准库提供的greater）
    std::vector<int> numbers = {10, 30, 20, 50, 40};
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    
    std::cout << "降序排序的numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}
    