#include <iostream>  
#include <stack> // ���� stack ͷ�ļ�  

using namespace std;  

int main() {  
    // 1. ����һ���������͵�ջ  
    stack<int> myStack;  

    // 2. ����Ԫ��  
    myStack.push(10); // �� 10 ѹ��ջ  
    myStack.push(20); // �� 20 ѹ��ջ  
    myStack.push(30); // �� 30 ѹ��ջ  

    // 3. ���ջ��Ԫ��  
    cout << "Stack elements (from top to bottom): ";  
    // ʹ�� tempStack ���������ջ������  
    stack<int> tempStack(myStack);  
    while (!tempStack.empty()) {  
        cout << tempStack.top() << " "; // ���ջ��Ԫ��  
        tempStack.pop(); // ������Ԫ��  
    }  
    cout << endl;  

    // 4. �鿴ջ��Ԫ��  
    cout << "Top element is: " << myStack.top() << endl; // �鿴ջ��Ԫ��  

    // 5. ����ջ��Ԫ��  
    myStack.pop(); // ����ջ��Ԫ��  
    cout << "After popping, stack top is: " << myStack.top() << endl; // �鿴�µ�ջ��Ԫ��  

    // 6. ���ջ�Ƿ�Ϊ��  
    cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;  

    // 7. ��ȡջ�Ĵ�С  
    cout << "Stack size: " << myStack.size() << endl;  

    // 8. ���ջ  
    while (!myStack.empty()) {  
        myStack.pop(); // ��������Ԫ��  
    }  
    cout << "Stack size after clearing: " << myStack.size() << endl; // �鿴��պ��ջ��С  

    return 0; // ����ɹ�����  
}