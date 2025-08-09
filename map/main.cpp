#include <iostream>  
#include <map> // ���� map ͷ�ļ�  

using namespace std;  

int main() {  
    // 1. ����һ���ַ����������� map  
    std::map<std::string, int> studentGrades; // key: ѧ������, value: ����  

    // 2. ����Ԫ��  
    studentGrades["Alice"] = 85; // ���� Alice �ĳɼ�  
    studentGrades["Bob"] = 92;    // ���� Bob �ĳɼ�  
    studentGrades["Charlie"] = 78; // ���� Charlie �ĳɼ�  

    // 3. ��� map �е�Ԫ��  
    cout << "Student grades:" << endl;  
    for (const auto& entry : studentGrades) { // ���� map  
        cout << entry.first << ": " << entry.second << endl; // ��������ͳɼ�  
    }  

    // 4. ����Ԫ��  
    string nameToFind = "Bob";  
    auto iter = studentGrades.find(nameToFind); // ���� Bob �ĳɼ�  
    if (iter != studentGrades.end()) { // ����Ƿ��ҵ�  
        cout << nameToFind << "'s grade: " << iter->second << endl; // ��� Bob �ĳɼ�  
    } else {  
        cout << nameToFind << " not found." << endl;  
    }  

    // 5. ɾ��Ԫ��  
    studentGrades.erase("Charlie"); // ɾ�� Charlie �ĳɼ�  
    cout << "After deleting Charlie:" << endl;  

    // 6. �ٴ���� map �е�Ԫ��  
    for (const auto& entry : studentGrades) {  
        cout << entry.first << ": " << entry.second << endl; // �����ǰ�ɼ�  
    }  

    // 7. ��� map �Ĵ�С  
    cout << "Total students: " << studentGrades.size() << endl;  

    // 8. ��� map  
    studentGrades.clear(); // �������Ԫ��  
    cout << "After clearing, total students: " << studentGrades.size() << endl; // �����պ�Ĵ�С  
    return 0; // ����ɹ�����  
}