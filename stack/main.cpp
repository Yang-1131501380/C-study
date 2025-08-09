#include <iostream>  
#include <stack> // 引入 stack 头文件  

using namespace std;  

int main() {  
    // 1. 声明一个整数类型的栈  
    stack<int> myStack;  

    // 2. 推入元素  
    myStack.push(10); // 将 10 压入栈  
    myStack.push(20); // 将 20 压入栈  
    myStack.push(30); // 将 30 压入栈  

    // 3. 输出栈的元素  
    cout << "Stack elements (from top to bottom): ";  
    // 使用 tempStack 来帮助输出栈的内容  
    stack<int> tempStack(myStack);  
    while (!tempStack.empty()) {  
        cout << tempStack.top() << " "; // 输出栈顶元素  
        tempStack.pop(); // 弹出顶元素  
    }  
    cout << endl;  

    // 4. 查看栈顶元素  
    cout << "Top element is: " << myStack.top() << endl; // 查看栈顶元素  

    // 5. 弹出栈顶元素  
    myStack.pop(); // 弹出栈顶元素  
    cout << "After popping, stack top is: " << myStack.top() << endl; // 查看新的栈顶元素  

    // 6. 检查栈是否为空  
    cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;  

    // 7. 获取栈的大小  
    cout << "Stack size: " << myStack.size() << endl;  

    // 8. 清空栈  
    while (!myStack.empty()) {  
        myStack.pop(); // 弹出所有元素  
    }  
    cout << "Stack size after clearing: " << myStack.size() << endl; // 查看清空后的栈大小  

    return 0; // 程序成功结束  
}