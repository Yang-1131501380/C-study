#include <iostream>  
#include <set> // ���� set ͷ�ļ�  

using namespace std;  

int main() {  
    // 1. ����һ������ set ����  
    std::set<int> mySet;  

    // 2. ����Ԫ��  
    mySet.insert(10); // ����Ԫ�� 10  
    mySet.insert(20); // ����Ԫ�� 20  
    mySet.insert(30); // ����Ԫ�� 30  
    mySet.insert(40); // ����Ԫ�� 40  

    // 3. ��� set �е�Ԫ��  
    std::cout << "Set contains: ";  
    for (int num : mySet) {  
        std::cout << num << " "; // ���ÿ��Ԫ��  
    }  
    std::cout << std::endl;  

    // 4. ����Ԫ��  
    if (mySet.find(20) != mySet.end()) { // ����Ԫ�� 20  
        std::cout << "20 is in the set." << std::endl;  
    } else {  
        std::cout << "20 is not in the set." << std::endl;  
    }  

    // 5. ɾ��Ԫ��  
    mySet.erase(20); // ɾ��Ԫ�� 20  

    // 6. �ٴ���� set �е�Ԫ��  
    std::cout << "After erasing 20, set contains: ";  
    for (int num : mySet) {  
        std::cout << num << " "; // ���ɾ�����Ԫ��  
    }  
    std::cout << std::endl;  

    // 7. ��� set �Ƿ�Ϊ��  
    if (mySet.empty()) {  
        std::cout << "The set is empty." << std::endl;  
    } else {  
        std::cout << "The set is not empty." << std::endl;  
    }  

    // 8. ��� set ��Ԫ�ص�����  
    std::cout << "The set contains " << mySet.size() << " elements." << std::endl;  

    return 0; // ����ɹ�����  
}