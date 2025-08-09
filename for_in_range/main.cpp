#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <list>

// �Զ���ṹ��ʾ��
struct Student {
    std::string name;
    int score;
    
    // ���캯��
    Student(std::string n, int s) : name(n), score(s) {}
};

int main() {
    // 1. �����÷��������������͵�����
    // ����vector<int>
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    std::cout << "����vector<int>�е�Ԫ��: ";
    // ʹ��const���ñ��ⲻ��Ҫ�ĸ��ƣ��ʺ�ֻ������
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    // 2. ����C�������
    const char* fruits[] = {"apple", "banana", "cherry", "date"};
    std::cout << "����C����ַ�������: ";
    // ֱ��ʹ��ֵ���ͱ���������С���������ͣ�
    for (const char* fruit : fruits) {
        std::cout << fruit << " ";
    }
    std::cout << "\n\n";
    
    // 3. �������޸�Ԫ��
    std::array<double, 4> values = {1.1, 2.2, 3.3, 4.4};
    std::cout << "�޸�ǰ��array: ";
    for (const auto& val : values) {
        std::cout << val << " ";
    }
    std::cout << "\n";
    
    // ʹ�������޸�Ԫ��ֵ
    for (double& val : values) {
        val *= 2;  // ÿ��Ԫ�س���2
    }
    
    std::cout << "�޸ĺ��array: ";
    for (const auto& val : values) {
        std::cout << val << " ";
    }
    std::cout << "\n\n";
    
    // 4. �����ַ������ַ����У�
    std::string message = "Hello, World!";
    std::cout << "�ַ����е�ÿ���ַ�: ";
    for (char c : message) {
        std::cout << "'" << c << "' ";
    }
    std::cout << "\n\n";
    
    // 5. �����Զ���ṹ������
    std::list<Student> students;
    students.emplace_back("Alice", 90);
    students.emplace_back("Bob", 85);
    students.emplace_back("Charlie", 95);
    
    std::cout << "ѧ����Ϣ�б�: \n";
    for (const Student& s : students) {
        std::cout << "����: " << s.name << ", ����: " << s.score << "\n";
    }
    std::cout << "\n";
    
    // 6. ���auto�ؼ��ּ򻯴���
    // auto���Զ��Ƶ�Ԫ������
    std::vector<std::pair<std::string, int>> pairs = {
        {"one", 1}, {"two", 2}, {"three", 3}
    };
    
    std::cout << "����pair����: \n";
    for (const auto& p : pairs) {  // auto�Ƶ�������Ϊstd::pair<std::string, int>
        std::cout << p.first << ": " << p.second << "\n";
    }
    std::cout << "\n";
    
    // 7. ����Ԫ��ֵ�ı���������Ҫִ���ض�������
    std::vector<int> dummy(5);  // ����5��Ĭ��ֵΪ0��Ԫ��
    std::cout << "ִ��5��ѭ��: ";
    for ([[maybe_unused]] const auto& ignored : dummy) {
        std::cout << "* ";
    }
    std::cout << "\n";
    
    return 0;
}
    