#include <iostream>  
#include <set> // 引入 set 头文件  

using namespace std;  

int main() {  
    // 1. 声明一个整型 set 容器  
    std::set<int> mySet;  

    // 2. 插入元素  
    mySet.insert(10); // 插入元素 10  
    mySet.insert(20); // 插入元素 20  
    mySet.insert(30); // 插入元素 30  
    mySet.insert(40); // 插入元素 40  

    // 3. 输出 set 中的元素  
    std::cout << "Set contains: ";  
    for (int num : mySet) {  
        std::cout << num << " "; // 输出每个元素  
    }  
    std::cout << std::endl;  

    // 4. 查找元素  
    if (mySet.find(20) != mySet.end()) { // 查找元素 20  
        std::cout << "20 is in the set." << std::endl;  
    } else {  
        std::cout << "20 is not in the set." << std::endl;  
    }  

    // 5. 删除元素  
    mySet.erase(20); // 删除元素 20  

    // 6. 再次输出 set 中的元素  
    std::cout << "After erasing 20, set contains: ";  
    for (int num : mySet) {  
        std::cout << num << " "; // 输出删除后的元素  
    }  
    std::cout << std::endl;  

    // 7. 检查 set 是否为空  
    if (mySet.empty()) {  
        std::cout << "The set is empty." << std::endl;  
    } else {  
        std::cout << "The set is not empty." << std::endl;  
    }  

    // 8. 输出 set 中元素的数量  
    std::cout << "The set contains " << mySet.size() << " elements." << std::endl;  

    return 0; // 程序成功结束  
}