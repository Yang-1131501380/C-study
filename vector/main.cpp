#include <iostream>  
#include <vector> // 引入 vector 头文件  

using namespace std;  

int main() {  
    // 1. 声明一个存储整数的 vector  
    std::vector<int> numbers; // 创建一个空的 vector  

    // 2. 添加元素  
    numbers.push_back(10); // 在末尾添加元素 10  
    numbers.push_back(20); // 在末尾添加元素 20  
    numbers.push_back(30); // 在末尾添加元素 30  

    // 3. 输出 vector 中的元素  
    cout << "Vector contains: ";  
    for (int i = 0; i < numbers.size(); ++i) {  
        cout << numbers[i] << " "; // 输出每个元素  
    }  
    cout << endl;  

    // 4. 访问特定元素  
    cout << "The first element is: " << numbers[0] << endl; // 访问第一个元素  

    // 5. 获取 vector 的大小  
    cout << "Size of vector: " << numbers.size() << endl; // 输出当前元素数量  

    // 6. 删除最后一个元素  
    numbers.pop_back(); // 删除末尾元素  
    cout << "After pop_back, vector contains: ";  
    for (int i = 0; i < numbers.size(); ++i) {  
        cout << numbers[i] << " "; // 输出删除后的元素  
    }  
    cout << endl;  

    // 7. 清空 vector  
    numbers.clear(); // 清空所有元素  
    cout << "After clear, size of vector: " << numbers.size() << endl; // 输出清空后的大小  

    // 8. 检查 vector 是否为空  
    if (numbers.empty()) {  
        cout << "The vector is now empty." << endl; // 检查是否为空  
    }  

    // 9. 重新添加元素并使用 at() 进行安全访问  
    numbers.push_back(40);  
    numbers.push_back(50);  
    cout << "The second element is: " << numbers.at(1) << endl; // 使用 at() 访问第二个元素  

    // 10. 预分配容量  
    numbers.reserve(10); // 预留空间，避免频繁分配内存  
    for (int i = 0; i < 10; ++i) {  
        numbers.push_back(i); // 添加元素  
        cout << "Capacity after push_back(" << i << "): " << numbers.capacity() << endl; // 输出当前容量  
    }  

    return 0; // 程序成功结束  
}