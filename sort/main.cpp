#include <iostream>
#include <vector>
#include <array>
#include <algorithm> // ����sort����
#include <string>

// �Զ���ṹ��ʾ��
struct Person {
    std::string name;
    int age;
    
    // ���캯���������ʼ��
    Person(std::string n, int a) : name(n), age(a) {}
};

// �Զ���ȽϺ��� - ��������������
bool compareByAge(const Person& a, const Person& b) {
    return a.age < b.age;
}

// �Զ���ȽϺ��� - ���������Ƚ�������
bool compareByNameLength(const Person& a, const Person& b) {
    return a.name.length() > b.name.length();
}

int main() {
    // 1. �Ի���������������
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int arraySize = sizeof(intArray) / sizeof(intArray[0]);
    
    // �����������飨Ĭ������
    std::sort(intArray, intArray + arraySize);
    
    std::cout << "������int����: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << "\n\n";
    
    // 2. ��vector��������
    std::vector<std::string> strVector = {"apple", "banana", "cherry", "date"};
    
    // ����vector��Ĭ�ϰ��ֵ���
    std::sort(strVector.begin(), strVector.end());
    
    std::cout << "������string vector: ";
    for (const std::string& s : strVector) {
        std::cout << s << " ";
    }
    std::cout << "\n\n";
    
    // 3. �Բ���Ԫ������
    std::array<double, 7> doubleArray = {3.14, 1.59, 2.65, 0.78, 9.23, 5.55, 4.12};
    
    // ֻ����ӵ�2������5��Ԫ�أ�����1��4����Ϊend�������ģ�
    std::sort(doubleArray.begin() + 1, doubleArray.begin() + 5);
    
    std::cout << "����������double array: ";
    for (double d : doubleArray) {
        std::cout << d << " ";
    }
    std::cout << "\n\n";
    
    // 4. ʹ���Զ���ȽϺ�������
    std::vector<Person> people;
    people.emplace_back("Alice", 30);
    people.emplace_back("Bob", 25);
    people.emplace_back("Charlie", 35);
    people.emplace_back("David", 28);
    
    // ��������������
    std::sort(people.begin(), people.end(), compareByAge);
    
    std::cout << "�����������������Ա�б�: \n";
    for (const Person& p : people) {
        std::cout << p.name << " (" << p.age << "��) ";
    }
    std::cout << "\n\n";
    
    // 5. ʹ��lambda���ʽ��Ϊ�ȽϺ���
    std::sort(people.begin(), people.end(), 
              [](const Person& a, const Person& b) {
                  // �������ֵ���������
                  return a.name > b.name;
              });
    
    std::cout << "�����������������Ա�б�: \n";
    for (const Person& p : people) {
        std::cout << p.name << " (" << p.age << "��) ";
    }
    std::cout << "\n\n";
    
    // 6. ��������ʹ�ñ�׼���ṩ��greater��
    std::vector<int> numbers = {10, 30, 20, 50, 40};
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    
    std::cout << "���������numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}
    