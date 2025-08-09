#include <iostream>  
#include <map> // 引入 map 头文件  

using namespace std;  

int main() {  
    // 1. 声明一个字符串到整数的 map  
    std::map<std::string, int> studentGrades; // key: 学生姓名, value: 分数  

    // 2. 插入元素  
    studentGrades["Alice"] = 85; // 插入 Alice 的成绩  
    studentGrades["Bob"] = 92;    // 插入 Bob 的成绩  
    studentGrades["Charlie"] = 78; // 插入 Charlie 的成绩  

    // 3. 输出 map 中的元素  
    cout << "Student grades:" << endl;  
    for (const auto& entry : studentGrades) { // 遍历 map  
        cout << entry.first << ": " << entry.second << endl; // 输出姓名和成绩  
    }  

    // 4. 查找元素  
    string nameToFind = "Bob";  
    auto iter = studentGrades.find(nameToFind); // 查找 Bob 的成绩  
    if (iter != studentGrades.end()) { // 检查是否找到  
        cout << nameToFind << "'s grade: " << iter->second << endl; // 输出 Bob 的成绩  
    } else {  
        cout << nameToFind << " not found." << endl;  
    }  

    // 5. 删除元素  
    studentGrades.erase("Charlie"); // 删除 Charlie 的成绩  
    cout << "After deleting Charlie:" << endl;  

    // 6. 再次输出 map 中的元素  
    for (const auto& entry : studentGrades) {  
        cout << entry.first << ": " << entry.second << endl; // 输出当前成绩  
    }  

    // 7. 检查 map 的大小  
    cout << "Total students: " << studentGrades.size() << endl;  

    // 8. 清空 map  
    studentGrades.clear(); // 清空所有元素  
    cout << "After clearing, total students: " << studentGrades.size() << endl; // 输出清空后的大小  
    return 0; // 程序成功结束  
}