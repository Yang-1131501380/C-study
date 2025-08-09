#include <iostream>  
#include <vector> // ���� vector ͷ�ļ�  

using namespace std;  

int main() {  
    // 1. ����һ���洢������ vector  
    std::vector<int> numbers; // ����һ���յ� vector  

    // 2. ���Ԫ��  
    numbers.push_back(10); // ��ĩβ���Ԫ�� 10  
    numbers.push_back(20); // ��ĩβ���Ԫ�� 20  
    numbers.push_back(30); // ��ĩβ���Ԫ�� 30  

    // 3. ��� vector �е�Ԫ��  
    cout << "Vector contains: ";  
    for (int i = 0; i < numbers.size(); ++i) {  
        cout << numbers[i] << " "; // ���ÿ��Ԫ��  
    }  
    cout << endl;  

    // 4. �����ض�Ԫ��  
    cout << "The first element is: " << numbers[0] << endl; // ���ʵ�һ��Ԫ��  

    // 5. ��ȡ vector �Ĵ�С  
    cout << "Size of vector: " << numbers.size() << endl; // �����ǰԪ������  

    // 6. ɾ�����һ��Ԫ��  
    numbers.pop_back(); // ɾ��ĩβԪ��  
    cout << "After pop_back, vector contains: ";  
    for (int i = 0; i < numbers.size(); ++i) {  
        cout << numbers[i] << " "; // ���ɾ�����Ԫ��  
    }  
    cout << endl;  

    // 7. ��� vector  
    numbers.clear(); // �������Ԫ��  
    cout << "After clear, size of vector: " << numbers.size() << endl; // �����պ�Ĵ�С  

    // 8. ��� vector �Ƿ�Ϊ��  
    if (numbers.empty()) {  
        cout << "The vector is now empty." << endl; // ����Ƿ�Ϊ��  
    }  

    // 9. �������Ԫ�ز�ʹ�� at() ���а�ȫ����  
    numbers.push_back(40);  
    numbers.push_back(50);  
    cout << "The second element is: " << numbers.at(1) << endl; // ʹ�� at() ���ʵڶ���Ԫ��  

    // 10. Ԥ��������  
    numbers.reserve(10); // Ԥ���ռ䣬����Ƶ�������ڴ�  
    for (int i = 0; i < 10; ++i) {  
        numbers.push_back(i); // ���Ԫ��  
        cout << "Capacity after push_back(" << i << "): " << numbers.capacity() << endl; // �����ǰ����  
    }  

    return 0; // ����ɹ�����  
}